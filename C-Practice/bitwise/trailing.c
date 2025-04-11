#include<stdio.h>
int main()
{
  int n,count=0;
  printf("enter a number");
  scanf("%d",&n);
  for(int i=0;i<32;i++)
  {
    if((n&(1<<i))==0){
        count++;
    }
    else if(n&(1<<i)){
        break;
    }

}
   printf("trailing zeros :%d",count);
}
