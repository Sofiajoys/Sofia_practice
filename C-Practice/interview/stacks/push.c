#include<stdio.h>
int stack[5];
int top=-1;
void push(int x)
{
    if(top==4)
    {
        printf("stack overflow\n");
    }
    else 
    {
        stack[++top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("stack underflow\n");
    }
    else 
    {
        printf("popped: %d",stack[top--]);
    }
}
int main()
{
    push(8);
    push(4);
    push(3);
    push(5);
    pop();
    printf("stack elements(top to bottom): \n");
    for(int i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    printf("\n");
    return 0;
}