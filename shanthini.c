#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
};
    struct node *newnode(int item)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=item;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
    struct node *insertnode(struct node *root,int item)
    {
        if(root==NULL)
        {
            printf("\nROOT");
            return newnode(item);
        }
        if(root->data>item)
        {
            root->left=insertnode(root->left,item);
            printf("\nLEFT");
        }
        if(root->data<item)
        {
            root->right=insertnode(root->right,item);
            printf("\nRIGHT");
        }
        return root;
    }
    void inorder(struct node *root)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left);
        printf(" %d",root->data);
        inorder(root->right);
    }
    void preorder(struct node *root)
    {
        if(root==NULL)
        {
            return;
        }
        printf(" %d",root->data);
        preorder(root->left);
        preorder(root->right);
    }


void main()
{
    int n;
    struct node *root=NULL;
    for(;;)
    {
    printf("\n1.Insert..");
    printf("\n2.Inorder Traversal..");
    printf("\n3.PreOrder Traversal..");
    printf("\nEnter your choice:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        {
            int value;
            printf("\nEnter Element:");
            scanf("%d",&value);
            root=insertnode(root,value);
        }break;
        case 2:
        {
            inorder(root);
        }break;
        case 3:
        {
            preorder(root);
        }break;
    }
    }
}
