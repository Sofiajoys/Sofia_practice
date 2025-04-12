#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,m;
    printf("enter no of elements");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("enter elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    m=*(p+0);
    for(int i=0;i<n;i++)
    {
        if(m<*(p+i))
          m=*(p+i);
    }
    printf("largest element is %d",m);
    free(p);
    
}