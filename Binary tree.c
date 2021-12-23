#include <stdio.h>
#include<stdlib.h>
struct bt{
    int data;
   struct bt *left;
    struct bt *right;
};

struct  bt *insert(struct bt *q,int val,char dir)
{
    struct bt*tmp;
    tmp=(struct bt *)malloc(sizeof(struct bt));
    tmp->data=val;
    tmp->left=tmp->right=NULL;
    if(dir=='l')
    q->left=tmp;
    else
    q->right=tmp;
}

void inorder(struct bt *q)
{
    if(q==NULL)
    {
        return;
    }
    inorder(q->left);
    printf("%d ",q->data);
    inorder(q->right);
    }
    
void preorder(struct bt *q)
    {
        if(q!=NULL)
        {
            printf("%d ",q->data);
            preorder(q->left);
           preorder(q->right);
        }
    }
        
void postorder(struct bt *q)
        {
            if(q!=NULL)
            {
                postorder(q->left);
                postorder(q->right);
                printf("%d ",q->data);
            }
        }
        
int main()
{
            struct bt *root=(struct bt*)malloc(sizeof(struct bt));
            root->data=-1;
            insert(root,3,'l');
            insert(root,2,'r');
            insert(root->left,5,'l');
            insert(root->right,7,'l');
            printf("\n display element in inorder:- ");
            inorder(root);
            printf("\n display element in preorder:- ");
            preorder(root);
            printf("\n display element in postorder:- ");
            postorder(root);
            return 1;
            
}
