#include <stdio.h>
void selectionsort(int arr[],int size)
{
   for(int j=0;j<size-1;j++)
    {
        int min=j;
       for(int i=j+1;i<size;i++)
      {
           if(arr[i]<arr[min])
           min=i;
      }
       int temp=arr[j];
       arr[j]=arr[min];
       arr[min]=temp;
   }
}
void print_Array(int arr[],int len)
{
    int i;
    for(i=0;i<len;i++)
    printf("%d ",arr[i]);
}
int main()
{
    int array[]={14,17,8,90,11,2};
    int length=sizeof(array)/sizeof(array[0]);
    printf("Before sorting the array:");
    print_Array(array,length);
    printf("\n");
    printf("After sorting the array:");
    selectionsort(array,length);
    print_Array(array,length);
    return 0;
} 
