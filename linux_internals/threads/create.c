#include<stdio.h>
#include<pthread.h>

void *even(void *n)
{
	int a=*(int *)n;
	printf("even numbers:");
	for(int i=0;i<=a;i++)
	{
		if(i%2==0)
		{
			printf("%d",i);
		}
	}
	printf("\n");
	return 0;
}

void *odd(void *m)
{
	int b=*(int *)m;
	printf("odd numbers:");
	for(int i=0;i<=b;i++)
	{
		if(i%2!=0)
		{
			printf("%d",i);
		}
	}
	printf("\n");
	return 0;
}
int main()
{
	pthread_t t1,t2;
	int a=10;
	pthread_create(&t1, NULL, even, &a);
        pthread_create(&t2, NULL, odd, &a);

        pthread_join(t1, NULL);
        pthread_join(t2, NULL);

	return 0;
}


