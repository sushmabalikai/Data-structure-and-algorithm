/*stack implemantation using linked list*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*p,*tmp,*tmp1,*end;
void insert_end(int);
void display();
void delete_end();
void isEmpty();
int main()
{
int val,n;
p=NULL;
do
{
printf("\n--------MENU--------");
printf("\n1.PUSH");
printf("\n2.POP");
printf("\n3.ISEMPTY");
printf("\n4.DISPLAY");
printf("\n5.EXIT");
printf("\nenter your choice :");
scanf("%d ",&n);
switch(n)
{
case1:printf("\nenter the value");
      scanf("%d",&val);
      insert(val);
      break;
case2:delete();
      break;
case3:isEmpty();
      break;
case4:display();
      break;
case5:exit(0);
      break;
default:printf("\n wrong choice!");
       break;
}
printf("\ndo you want to cont.....");
}while('y'==getch());
}
void insert(int ele)
{
tmp=(struct node*)malloc(sizeof(struct node));
tmp->data=ele;
if(p==NULL){
tmp->next=NULL;
}
else
{
tmp->next=p;
}
p=tmp;
}
void delete()
{
tmp=p;
if(p==NULL)
printf("\n no element to be deleted!!");
else
{
printf("\n element deleted-%d",p->data);
p=p->next;
}
}
void isEmpty()
{
if(p==NULL)
printf("stack is Empty");
else
{
printf("stack is not Empty");
}
}
void display()
{
tmp=p;
while(tmp!=NULL);
{
printf("\n%d",tmp->data);
tmp=tmp->next;
}
}