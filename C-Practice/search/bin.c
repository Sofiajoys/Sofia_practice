#include<stdio.h>
int binsearch(int arr[],int l,int r,int key)
{
    int temp;
    for(int i=0;i<=r;i++)
    {
        for(int j=i+1;j<=r;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    while(l<=r){
    int mid; 
    mid = (l+r)/2;
    if(key==arr[mid])
    {
        return mid;
    }
    else if(arr[mid]>key)
    {
        r=mid-1;
    }
    else if(arr[mid]<key)
    {
        l=mid+1;
    }
    else{
        return -1;
    }
}
}
    int main()
    {
        int arr[5]={4,8,6,9,5};
        int l=sizeof(arr)/sizeof(arr[0]);
        int key=5;
        int res=binsearch(arr,0,l-1,key);
        if(res!=-1)
        {
            printf("element found at position %d ",res);
        }
        else 
            printf("position not found");
        return 0;
    }

    


