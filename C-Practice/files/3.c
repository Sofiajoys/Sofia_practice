#include<stdio.h>
int main()
{
    FILE* fp;
    fp=fopen("file.txt","w");
    int i;
    int num[]={1,2,3,4,5,6,7,8,9,10};
    int n=(sizeof(num)/sizeof(int));

    for(int i=0;i<n;i++)
    {
    fprintf(fp,"%d ",num[i]);
    }
    printf("even:\n");
    for(int i=0;i<n;i++){
    if(num[i]%2 == 0)
    {
        printf("%d ",num[i]);
    }
}

    printf("\nodd:\n");
    for(int i=0;i<n;i++){
    if(num[i]%2 != 0){
        printf("%d ",num[i]);
    }
}
}

    
