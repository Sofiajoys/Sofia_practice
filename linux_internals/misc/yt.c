#include <linux/miscdevice.h>
#include <linux/fs.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

static int etx_misc_open(struct inode *inode, struct file *file)
{
    pr_info("My Own open function called\n");
    return 0;
}

static int etx_misc_close(struct inode *inode, struct file *file)
{
    pr_info("My Own Close function called\n");
    return 0;
}
static ssize_t etx_misc_write(struct file *filp, char __user *buf,
                    size_t count, loff_t *f_pos) {
	printk("My Own Write Function Called...\r\n");
	return 0;
}

static ssize_t etx_misc_read(struct file *filp, char __user *buf,
                    size_t count, loff_t *f_pos) {
	printk("My Own Read Function Called...\r\n");
	return 0;
}
//File operation structure  presented in include/linux/fs.h
static const struct file_operations fops = {
    .owner          = THIS_MODULE,
    .write          = etx_misc_write,
    .read           = etx_misc_read,
    .open           = etx_misc_open,
    .release        = etx_misc_close,
};

//Misc device structure
struct miscdevice etx_misc_device = {
    .minor = MISC_DYNAMIC_MINOR,
    .name = "Yt_Misc",
    .fops = &fops,
};

static int Driver_Init(void)
{
	int Status;
	Status = misc_register(&etx_misc_device);
	if(Status) {
		printk("My Own Misc Driver register Failed.\r\n");
		return Status;
	}
	printk(" My own misc driver registartion Success..\r\n");
	return 0;
	
}
static void Driver_Exit(void)
{
	misc_deregister(&etx_misc_device);
	printk(" My own misc driver Deregistartion Success..\r\n");
}

module_init(Driver_Init)
module_exit(Driver_Exit)

module_init(Driver_Init)
module_exit(Driver_Exit)

MODULE_LICENSE("GPL");
MODULE_AUTHOR("ananthaumapathi@gmail.com");
MODULE_DESCRIPTION("A simple device driver - Misc Driver");
MODULE_VERSION("1.00");
