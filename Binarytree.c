#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *left;
struct node *right;
}*root;
struct node* create(){
    struct node *newnode;
    struct node *temp;
    struct node *temp1;
    int n;
    printf("ENTER:\n");
    scanf("%d",&n);
    if(n==-1){
         return 0;
    }
    else if(n==0){
       return 0;
    }
    else{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=n;
    printf("ENTER LEFT NODE OF %d:",n);
    newnode->left=create();
    printf("ENTER RIGHT NODE OF %d:",n);
    newnode->right=create();
    }
    return newnode;
}
void preorder( struct node *t) //address of root node is passed in t
{
if(t!=NULL)
{
printf("\n%d",t->data); //visit the root
preorder(t->left); //preorder traversal on left subtree
preorder(t->right); //preorder traversal om right subtree
}
}


void main(){
    int choice;
    for(;;){
        scanf("%d",&choice);
        switch(choice){
        case 1:root=create();
        break;
        case 2:preorder(root);
        break;
        case 3:exit(0);
        break;

            }
    }
   // root=create();
    //printf("\nThe preorder traversal of tree is:\n");
//preorder(root);
return 0;
}
