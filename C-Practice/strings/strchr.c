#include<stdio.h>
int main()
{
    char str[5]="hello";
    char c='l';
    int i;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==c){
            printf("%d",i);
            break;
    }
}
return 0;
}