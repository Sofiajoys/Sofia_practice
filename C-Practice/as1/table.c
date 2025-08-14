#include<stdio.h>
int main()
{
    for(int i=1;i<=12;i++)
    {
        printf("3 * %d = %d\n",i,(i<<2)+i);
    }
    return 0;
}
