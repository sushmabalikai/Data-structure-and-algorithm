#include <stdio.h>

#include<conio.h>

#include<stdlib.h>

struct node
{
    
int data;
    
struct node *next;

}*p,*tmp,*tmp1;

void insert_end(int);

void delete_beg();

void display();

void isEmpty();

int main()

{
    
int val,n;
    
p=NULL;
    
do
    
{
        
printf("/n--------MENU--------");
       
 printf("\n1.ENQUEUE");
       
 printf("\n2.DEQUEUE");
        
printf("\n3.IS EMPTY");
        
printf("\n4.DISPLAY");
        
printf("\n5.EXIT");
       
 printf("\nenter your choice:");
       
 scanf("%d",&n);
       
 do
{
        
switch(n)
        
{
            
case1:printf("\nenter the value");
                  
      scanf("%d",&val);
                  
      insert_end(val);
                 
      break;
            
case2:delete_beg();
                  
      break;
            
case3:isEmpty();
                  
      break;
            
case4:display();
                 
      break;
            
case5:exit(0);
                 
      break;
            
default:printf("\nwrong choice!");
                  
      break;
        
}

printf("\ndo u want to cont......");
        
    
}while('y'==getch());
    
}



void insert_end(int ele)

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
    
void insert_beg(int ele)
   
 {
       
 tmp=(struct node*)malloc(sizeof(struct node));
        
tmp->data=ele;
        
if(p==NULL)
        
{
            
tmp->next=NULL;
        
}
        
else
        
{
            
tmp->next=p;
        
}
        
p=tmp;
    
}
    
void isEmpty()
   
 {
        
if(p==NULL)
        
printf("queue is empty");
       
 else
        
{
           
 printf("queue is not empty");
       
 }
    
}
    
 
void delete_beg()
   
{
        
tmp=p;
        
if(p==NULL)
       
 printf("\n no element to be deleted!!");
        
else
        
{
            
printf("\n element deleted=%d",p->data);
            
p=p->next;
        
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
