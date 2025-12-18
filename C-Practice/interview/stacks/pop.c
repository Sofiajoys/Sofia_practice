#include<stdio.h>
int stack[5]={2,8,4,3};
int top=3;
void pop()
{
    if(top==-1)
    {
        printf("stack underflow\n");
    }
    else 
    {
        printf("popped: %d\n",stack[top--]);
    }
}
int main()
{
    pop();
    printf("stack elements: \n");
    for(int i=top;i>=0;i--)
    {
        printf("%d\n",stack[top--]);
    }
    printf("\n");
}