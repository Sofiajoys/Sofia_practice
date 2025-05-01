#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two values");
    scanf("%d%d",&a,&b);
  in :  printf("select an option\n1: + \n2: -\n");
    scanf("%d",&c);
    switch(c){
        case 1:
          printf("addition:%d",a+b);
          goto in;
          break;
        case 2:
          printf("sub:%d",a-b);
          break;
        default:
          printf("wrong i/p");
          goto in;
          break;
    }
}