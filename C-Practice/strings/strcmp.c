#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    int a,b,c,d,n,count=0;
    printf("enter string 1:");
    fgets(str1,sizeof str1,stdin);
    printf("enter string 2:");
    fgets(str2,sizeof str2,stdin);
    a=strlen(str1)-1;
    b=strlen(str2)-1;
    printf("a= %d\nb= %d\n",a,b);
    if(a==b){
        for(int i=0;i<a;i++){
           if(str1[i]==str2[i]){
              count++;
           }
        }
        if(count==a){
           printf("strings are equal");
        }
        else
            printf("strings are not equal");
    } 
    else
      printf("strings are not equal");
return 0;
}