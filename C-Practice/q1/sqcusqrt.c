#include<stdio.h>
#include<math.h>
int main()
{
    int sq,cu,n;
    float root;
    printf("enter value of n:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        sq=pow(i,2);
        cu=pow(i,3);
        root=sqrt(i);
        printf("square: %d cube: %d root: %.2f\n",sq,cu,root);
    }
}