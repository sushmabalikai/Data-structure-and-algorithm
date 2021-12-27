/*queue using array*/
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct que
{
int front,rear,size;
unsigned actualsize;
int *arr;
};
struct que* createque(unsigned actualsize)
{
struct que* que=(struct que*)malloc(sizeof(struct que));
que->actualsize=actualsize;
que->size=0;
que->front=que->rear=-1;
que->arr=(int*)malloc(que->actualsize*sizeof(int));
return que;
}
int isFull(struct que *que)
{
return(que->size==que->actualsize);
}
void enqueue(struct que *que,int item)
{
if(isFull(que))
return;
que->rear=que->rear+1;
que->arr[que->rear]=item;
que->size=que->size+1;
if(que->front==-1)
que->front++;
printf("%d enqueued to que\n",item);
}
int isEmpty(struct que *que)
{
return(que->size==0);
}
int deque(struct que *que)
{
if(isEmpty(que))
return INT_MIN;
int item=que->arr[que->front];
if(que->front==que->rear){
que->front=que->rear=-1;
}
else
que->front=que->front+1;
que->size=que->size-1;
return item;
}
int front(struct que *que)
{
if(isEmpty(que))
return INT_MIN;
return que->arr[que->front];
}
int rear(struct que *que)
{
if(isEmpty(que))
return INT_MIN;
return que->arr[que->rear];
}
int main()
{
int val,n;
struct que *que=createque(1000);
do
{
printf(\n--------MENU--------");
printf("\n1.ENQUEUE");
printf("\n2.DEQUEUE");
printf("\n3.ISEMPTY");
printf("\n4.ISFULL");
printf("\n5.FIRST ELE");
printf("\n6.LAST ELE");
printf("\n7.EXIT");
printf("\nenter your choice :");
scanf("%d",&n);
switch(n)
{
case1:printf("\nenter the value");
      scanf("%d",&val);
      enqueue(que,val);
      break;
case2:dequeue(que);
      break;
case3:printf("\nISEMPTY:%d",isEmpty(que));
      break;
case4:printf("\nISFULL:%d",isFull(que));
      break;
case5:printf("\nfront element:%d",front(que));
      break;
case6:printf("\nlast element:%d",rear(que));
      break;
case7:exit(0);
      break;
default:printf("\n wrong choice!");
      break;
}
printf("\ndo you want to cont....");
}while('y'==getch());
}
