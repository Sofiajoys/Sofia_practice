#include<stdio.h>
int main()
{
    int m=29;
    int *p=&m;
    int ab=*p;
    printf("value of m %d\n",m);
    printf("address of m %p\n",p);
    printf("address of ab %p\n",&ab);
    printf("value of ab %d\n",ab);
    m=34;
    p=&m;
    ab=*p;
    printf("address of ab %p\n",&ab);
    printf("value of ab %d\n",ab);
    ab=7;
    printf("address of ab %p\n",&ab);
    printf("value of ab %d\n",ab);
}



