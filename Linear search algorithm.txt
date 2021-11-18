#include <stdio.h>

int linearSearch(int arr[],int targetElement,int n)

{
    
 for(int i=0;i<n;i++)
  
  if(arr[i]==targetElement)
    
   return i;
    
 return -1;

}

int main()

{
    
 int arr[]={22,6,41,0,1,19};
    
 int targetElement=1;
    
 int n=sizeof(arr)/sizeof(arr[0]);
   
 int ans=linearSearch(arr,targetElement,n);
   
 if(ans==-1)
    
  printf("elements not present in the given array");
   
 else
    
  printf("%d th element in the array",ans+1);
   
 targetElement=7;
    
 ans=linearSearch(arr,targetElement,n);
   
 if(ans==-1)
    
  printf("\nelement not present in the given array");
    
 else
   
  printf("\nelement found!\n index:%d",ans);

}

Output:
5 th element in the array
element not present in the given array