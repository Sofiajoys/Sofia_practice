#include <stdio.h>
int main() {
    const float PI = 3.14159;  
    float r,a;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    a = PI * r * r;
    printf("Area of the circle = %.2f\n", a);
    return 0;
}

