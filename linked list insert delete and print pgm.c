//linked list
#include <stdio.h>


#include<conio.h>


#include<stdlib.h>


struct node

{
    
int data;
    
struct node *next;

}*p,*tmp,*tmp1;



void insert_element(int);

void delete_element();

void display();



void main()

{
    
int val,n;
    
p=NULL;
    
while(1)
    
{
        
printf("\n----------MENU----------");
        
printf("\n1.Insert the element");
        
printf("\n2.delete the element");
        
printf("\n3.Display");
        
printf("\n4.Exit");
        
printf("\n enter your choice:");
        
scanf("%d",&n);
        

if(n==1)
        
{
            
printf("\n enter the value");
            
scanf("%d",&val);
             
insert_element(val);
        
}
         

else if(n==2)
         
{
             
            
delete_element();
         
}
                  
          

else if(n==3)  
          
{
             
display();
          
}
            

else if(n==4)
            
{
            
exit(0);
            
}
          

else
          
{
              
printf("\n wrong choice!");
                   
       
}
          
}

}


void insert_element(int ele)

{
        
tmp=p;
        
tmp1=(struct node*)malloc(sizeof(struct node));
        
tmp1->data=ele;
        
tmp1->next=NULL;
        
if(p==NULL)
        
p=tmp1;
        
else
        
{
           
while(tmp->next!=NULL)
            
tmp=tmp->next;
            
tmp->next=tmp1;
        
}
 
}




void delete_element()

{
        
tmp=p;
        
struct node* pre;
        
if(p==NULL)
        
printf("\n no element to be deleted!!");
        
else if(p->next==NULL)
        
{
        
printf("\nelement deleted - %d",p->data);
        
p=NULL;
    
}
    
else
    
    
{
        
while(tmp->next!=NULL)
        
{
            
pre=tmp;
            
tmp=tmp->next;
        
}
        
pre->next=NULL;
        
printf("\nelement deleted-%d",tmp->data);
    
}

}

    

void display()

{
       
tmp=p;
       
while(tmp!=NULL)
        
{
            
printf("\n%d",tmp->data);
            
tmp=tmp->next;
        
}

}