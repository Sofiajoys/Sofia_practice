#include<math.h>
#include "calculation.h>"
int prime(int a)
{
	if(a<=1)
	{
		return 0;
	}
	for(int i=2;i<=sqrt(a);i++)
	{
		if(num % i ==0)
		{
			return 0;
		}
	}
	return 1;
}

