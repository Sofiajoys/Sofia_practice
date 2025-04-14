#include<stdio.h>
#include<math.h>
int main()
{
    int n,num,rem,arm=0,b;
    printf("enter no of digits");
    scanf("%d",&n);
    printf("enter a num: ");
    scanf("%d",&num);
    b=num;
    for(int i=0;num!=0;i++){
    rem=num%10;
    num=num/10;
    arm+=pow(rem,n);
    printf("%d\n",arm);
    }
    if(b==arm){
      printf("is an armstrong number");
    }
    else{ 
      printf("not an armstrong number");
    }

}