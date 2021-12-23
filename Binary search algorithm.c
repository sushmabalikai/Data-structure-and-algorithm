#include <stdio.h>
int binarySearch(int arr[],int item,int beg,int end)
{
    while(beg<=end)
   {
        int midIndex=beg+(end-beg)/2;
        if(arr[midIndex]==item)
        return midIndex;
       if(arr[midIndex]<item)
        beg=midIndex+1;
       else
        end=midIndex-1;
   }
    return -1;
}

int main()
{
    int arr[]={13,45,65,2,117};
    int n=sizeof(arr)/sizeof(arr[0]);
    int item=117;
    int ans=binarySearch(arr,item,0,n-1);
   if(ans==-1)
     printf("element not present");
   else
    printf("Index: %d",ans);
     return 0;
}
