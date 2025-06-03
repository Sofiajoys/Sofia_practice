#include<stdio.h>
int main()
{
  int n,a;
  printf("enter a number");
  scanf("%d",&n);
  for(int i=0;i<32;i++)
  {
    if(n&(1<<i)){
      a=i;
      
      printf("highest bit is %d\n",a);
    }
  }
}