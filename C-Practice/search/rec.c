#include<stdio.h>
int binsearch(int arr[],int l,int r,int key)
{
    while(l<=r){
    int mid; 
    mid = (l+r)/2;
    if(key==arr[mid])
    {
        return mid;
    }
    else if(arr[mid]>key)
    {
        return binsearch(arr,l,mid-1,key);
    }
    else if(arr[mid]<key)
    {
        return binsearch(arr,mid+1,r,key);
    }
    else{
        return -1;
    }
}
}
int sort(int arr[],int n)
{
    int temp;
    for(int i=0;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}

    int main()
    {
        int arr[5]={4,8,6,9,5};
        int l=sizeof(arr)/sizeof(arr[0]);
        int key=9;
        sort(arr,5);
        int res=binsearch(arr,0,l-1,key);
        if(res!=-1)
        {
            printf("element found at position %d ",res);
        }
        else 
            printf("position not found");
        return 0;
    }

    


