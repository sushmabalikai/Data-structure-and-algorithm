#include <stdio.h>
#include <stdlib.h>
struct bst{
    int data;
    struct bst *left;
    struct bst *right;
};

struct bst *insert(struct bst *q,int val)
{
    struct bst *temp;
    if(q==NULL)
    {
    temp=(struct bst*)malloc(sizeof(struct bst));
    temp->data=val;
    temp->left=NULL;
    temp->right=NULL;
    q=temp;
    }
   else
   {
    if(val<q->data)
    {
        q->left=insert(q->left,val);
    }
    else
    {
        q->right=insert(q->right,val);
    }
}
    return q;
}

void inorder(struct bst *q)
{
    if(q==NULL)
    {
         return;
    }
    inorder(q->left);
    printf("%d ",q->data);
    inorder(q->right);
}

struct bst *search(struct bst *p,int key,struct bst **y)
{
    struct bst *temp;
    if(p==NULL)
    return(NULL);
    temp=p;
    *y=NULL;
    while(temp!=NULL)
    {
        if(temp->data==key)
        return(temp);
        else
        {
            *y=temp;
             if(temp->data>key)
            temp=temp->left;
            else
            temp=temp->right;
        }
    }
    return(NULL);
}

int main()
{
    struct bst *root;
    root=NULL;
    int n,val,num;
    printf("\n enter number of term:- ");
    scanf("%d",&n);
    while(n!=0)
    {
       printf("\n enter element:- ");
       scanf("%d",&val);
       root=insert(root,val);
       n--;
    }
   printf("\n display element:- ");
   inorder(root);
   return 1;
}
