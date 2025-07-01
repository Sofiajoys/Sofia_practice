#include<stdio.h>
#include "calculation.h"
int fibonacci(int n)
{
	int a=0,b=1,next;
	for(int i=0;i<n;i++)
	{
		printf("%d",&n);
		next=a+b;
		a=b;
		b=next;
	}
}	
