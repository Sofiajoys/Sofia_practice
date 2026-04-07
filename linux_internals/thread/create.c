#include<stdio.h>
#include<pthread.h>
void *thread_func(void *arg)
{
	printf("inside thread");
	return NULL;
}
int main()
{
	pthread_t t1;
	pthread_create(&t1,NULL,thread_func,NULL);
	pthread_join(t1,NULL);
	return 0;
}
