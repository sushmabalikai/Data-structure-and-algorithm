#include <stdio.h>
void swap_elements(int* first,int* second)
{
    int temp=*first;
        *first=*second;
        *second=temp;
}
int partition_function(int arr[],int l,int h)
{
    int pivot=arr[h];
    int pIndex=(l-1);
    for(int i=1;i<h;i++)
    {
       if(arr[i]<pivot)
        {
            pIndex++;
            swap_elements(&arr[pIndex],&arr[i]);
        }
    }
   swap_elements(&arr[pIndex+1],&arr[h]);
   return(pIndex+1);
}
void quick_sort(int arr[],int l,int h)
{
    if(l<h)
    {
        int pIndex=partition_function(arr,l,h);
        quick_sort(arr,l,pIndex-1);
        quick_sort(arr,pIndex+1,h);
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
    printf("before sorting the array: ");
    print_Array(array,length);
    printf("\n");
    printf("after sorting the array: ");
    quick_sort(array,0,length-1);
    print_Array(array,length);
    return 0;
}
