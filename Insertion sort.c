#include <stdio.h>
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
   {
        printf("%d ",arr[i]);
   }
    printf("\n");
}
void insertionsort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int tmp=arr[i];
        int j=i-1;
        while(tmp<arr[j]&&j>=0)
        {
           arr[j+1]=arr[j];
           --j;
        }
      arr[j+1]=tmp;
    }
}
int main()
{
   int arr[]={9,5,1,4,3};
   int n=sizeof(arr)/sizeof(arr[0]);
   printf("elements before sorting:\n");
   display(arr,n);
   insertionsort(arr,n);
   printf("elements after sorting:\n");
   display(arr,n);
}
