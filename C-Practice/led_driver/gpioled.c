#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/gpio.h>
#include <linux/fs.h>
#include <linux/uaccess.h>

#define GPIO_LED 20   // GPIO5_IO02 (safe)

static int major;
static struct class *led_class;
static struct device *led_device;
static char value;

/* Write function */
static ssize_t led_write(struct file *file,
                         const char __user *buf,
                         size_t len, loff_t *off)
{
    if (copy_from_user(&value, buf, 1))
        return -EFAULT;

    if (value == '1') {
        gpio_set_value(GPIO_LED, 0); // ACTIVE LOW → ON
        printk("LED ON\n");
    }
    else if (value == '0') {
        gpio_set_value(GPIO_LED, 1); // OFF
        printk("LED OFF\n");
    }

    return len;
}

static struct file_operations fops = {
    .owner = THIS_MODULE,
    .write = led_write,
};

/* Init */
static int __init led_init(void)
{
    int ret;

    printk("LED Driver Init\n");

    /* Request GPIO */
    ret = gpio_request(GPIO_LED, "led_gpio");
    if (ret) {
        printk("GPIO request failed\n");
        return -EBUSY;
    }

    /* Set direction */
    ret = gpio_direction_output(GPIO_LED, 1); // OFF initially
    if (ret) {
        printk("GPIO direction failed\n");
        gpio_free(GPIO_LED);
        return -EINVAL;
    }

    /* Register char device */
    major = register_chrdev(0, "led_driver", &fops);
    if (major < 0) {
        printk("Device registration failed\n");
        gpio_free(GPIO_LED);
        return major;
    }

    /* Create class */
    led_class = class_create(THIS_MODULE, "led_class");
    if (IS_ERR(led_class)) {
        unregister_chrdev(major, "led_driver");
        gpio_free(GPIO_LED);
        return PTR_ERR(led_class);
    }

    /* Create device node automatically */
    led_device = device_create(led_class, NULL,
                              MKDEV(major, 0), NULL,
                              "led_driver");

    printk("Device created: /dev/led_driver\n");

    return 0;
}

/* Exit */
static void __exit led_exit(void)
{
    device_destroy(led_class, MKDEV(major, 0));
    class_destroy(led_class);
    unregister_chrdev(major, "led_driver");

    gpio_set_value(GPIO_LED, 1); // OFF
    gpio_free(GPIO_LED);

    printk("LED Driver Removed\n");
}

module_init(led_init);
module_exit(led_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sofia");
MODULE_DESCRIPTION("GPIO LED Driver with /dev interface");

