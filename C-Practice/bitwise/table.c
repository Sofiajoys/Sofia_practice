#include<stdio.h>
int table(int a)
{
    for(int j=1;j<=20;j++){
    for(int i=1;i<=12;i++){
    printf("%d * %d = %d\n",j,i,j*i);
    }
}
    return 0;
}

int main()
{
    int a;
    
    table(a);
}
