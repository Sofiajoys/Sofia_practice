#include<stdio.h>
int main()
{
  int n,count=1;
  printf("enter a number");
  scanf("%d",&n);
  for(int i=31;i>0;i--)
  {
    if((n&(1<<i))==0){
        count++;
    }
    else
      break;
 }
   printf("leading zeros :%d",count);
}