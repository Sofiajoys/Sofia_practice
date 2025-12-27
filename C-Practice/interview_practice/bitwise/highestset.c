#include<stdio.h>
int main()
{
  int n,a;
  printf("enter a number");
  scanf("%d",&n);
  for(int i=31;i>=0;i--)
  {
    if(n&(1<<i))
    {
      printf("highest set bit is %d\n",i);
      break;
    }
  }
  return 0;
}