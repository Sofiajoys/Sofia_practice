#include<stdio.h>
int main()
{
    int n,r;
    int bits=32;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("enter no of rotations: ");
    scanf("%d",&r);
    int left,right;
    left=(n<<r)|(n>>(bits-r));
    right=(n>>r)|(n<<(bits-r));
    printf("after left rotation: %d",left);
    printf("after right rotation: %d",right);
}