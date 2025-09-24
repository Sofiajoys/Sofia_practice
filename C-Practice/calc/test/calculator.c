#include<stdio.h>
#include"calculator.h"
int main()
{
    int op,a,b;
    printf("choose a operation");
    printf("1: addition\n2: subtraction\n3: multiplication\n4: division\n5: even\n6: odd\n7: prime\n8:fibonacci\n");
    scanf("%d",&op);
    switch(op){
        case 1:
        printf("enter two operands:");
        scanf("%d%d",&a,&b);
        printf("result: %d\n",add(a,b));
        break;
        
        case 2:
        printf("enter two operands:");
        scanf("%d%d",&a,&b);
        printf("result: %d\n",sub(a,b));
        break;

        case 3:
        printf("enter two operands:");
        scanf("%d%d",&a,&b);
        printf("result: %d\n",mul(a,b));
        break;

        case 4:
        printf("enter two operands:");
        scanf("%d%d",&a,&b);
        if (b == 0)
                printf("Error\n");
        else
                printf("Result: %f\n", div(a, b));
        break;

        case 5:
        printf("enter an operands:");
        scanf("%d",&a);
        if(even(a))
           printf("%d is even",a);
        else
           printf("%d is not even",a);
        break;

        case 6:
        printf("enter an operands:");
        scanf("%d",&a);
        if(odd(a))
           printf("%d is odd",a);
        else
           printf("%d is not odd",a);
        break;

        case 7:
        printf("enter an operands:");
        scanf("%d",&a);
        if(prime(a))
           printf("%d is prime",a);
        else
           printf("%d is not prime",a);
        break;

        case 8:
        printf("enter an operands:");
        scanf("%d",&a);
        fibonacci(a);
        break;

        default:
        printf("Invalid operation selected.\n");


    }
       return 0;
    

}