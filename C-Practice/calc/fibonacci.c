#include<stdio.h>
int fibonacci(int n)
{
	int a=0,b=1,next;
	printf("%d %d",a,b);
	for(int i=0;i<n-2;i++)
	{
		next=a+b;
		printf(" %d ",next);
		a=b;
		b=next;
	}
}	
