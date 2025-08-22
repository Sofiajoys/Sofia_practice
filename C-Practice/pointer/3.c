#include<stdio.h>
int main()
{
    int m=300;
    float fx=300.600006;                                                                                              
    char cht = 'z';
    int *p1;
    float *p2;
    char *p3;
    p1=&m;
    p2=&fx;
    p3=&cht;
    printf("address of m:%p\n",&m);//p1
    printf("address of fs:%p\n",&fx);//p2
    printf("address of cht:%p\n",&cht);//p3
    printf("\n");
    printf(" value at address of m:%d\n",*(&m));//300
    printf(" value at address of fx:%f\n",*(&fx));//300.600006
    printf(" value at address of cht:%c\n",*(&cht));//'z'
    printf("\n");
    printf("address of m:%p\n",p1);
    printf("address of fx:%p\n",p2);
    printf("address of cht:%p\n",p3);
    printf("\n");
    printf("value at address of m:%d\n",*p1);//300
    printf("value at address of fx:%f\n",*p2);//300.600006
    printf("value at address of cht:%c\n",*p3);//'z'
    return 0;
}