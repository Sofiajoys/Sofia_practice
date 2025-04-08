#include<stdio.h>
#include<string.h>
int main()
{
    int count,i,dig,sp,a=0;
    count=dig=sp=0;
    char str1[20];
    printf("enter a string:\n");
    fgets(str1,sizeof str1,stdin);
    printf("%s",str1);
    while(str1[a] !='\0'){
      if(((str1[a]>='a')&&(str1[a]<='z'))||((str1[a]>='A')&&(str1[a]<='Z')))
      {
        count++; 
      }
      else if(str1[a]>='0' && str1[a]<='9')
      {
        dig++;
      }
      else
      {
        sp++; 
      }
      printf("%c",str1[a]);
      a++;
     
}
    printf("no of alphabets are%d:\n",count);
    printf("no of digits:%d\n",dig);
    printf("special characters:%d\n",sp);
    printf("a:%d",a);
    i=sizeof str1;
    printf("i:%d",i);

    return 0;
}