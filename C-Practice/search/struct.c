#include<stdio.h>
#include<string.h>
struct book
{
    char name[20];
    int price;
    int pages; 
};
int main()
{
    struct book b[3];
    for(int i=0;i<3;i++)
    {
        printf("enter name of the book%d: ",i+1);
        fgets(b[i].name,20,stdin);
        b[i].name[strcspn(b[i].name,"\n")]='\0';
        printf("enter price%d: ",i+1);
        scanf("%d",&b[i].price);
        printf("enter no of pages%d: ",i+1);
        scanf("%d",&b[i].pages);
        printf("\n");
        while((getchar())!='\n' && getchar()!=EOF);
    }
    
    for(int i=0;i<3;i++)
    {
        printf("\nbook %d details:\n",i+1);
        printf("name of the book:%s\n",b[i].name);
        printf("price of the book:%d\n",b[i].price);
        printf("no of pages:%d\n",b[i].pages);
        printf("\n");
    }
    struct book temp;
    printf("after sorting: ");
    for(int i=0;i<=3-1;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(b[i].pages>b[j].pages)
            {
                temp=b[j];
                b[j]=b[i];
                b[i]=temp;
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        printf("\nbook %d details:\n",i+1);
        printf("name of the book:%s\n",b[i].name);
        printf("price of the book:%d\n",b[i].price);
        printf("no of pages:%d\n",b[i].pages);
        printf("\n");
    }

}