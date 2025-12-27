#include<stdio.h>
int main()
{
  int n;
  printf("enter a number");
  scanf("%d",&n);
  for(int i=0;i<32;i++)
  {
    if((n&(1<<i))!=0)
    {
      printf("lowest set bit is %d\n",i);
      break;
    }
  }
  return 0;
}