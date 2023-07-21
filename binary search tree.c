#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*left;
struct node*right;
};
struct node *newnode(int value){
struct node *temp=(struct node*)malloc(sizeof(struct node));
temp->data=value;
temp->left=NULL;
temp->right=NULL;
};
struct node *insertnode(struct node*root,int value){
if(root==NULL){
    return newnode(value);
}
else if(root->data>value){
    root->left=insertnode(root->left,value);
    printf("LEFT\n");
}
else if(root->data<value){
    root->right=insertnode(root->right,value);
    printf("right\n");
}
return root;
}
void main(){
int choice;
struct node *root=NULL;
for(;;){
    printf("1 TO INSERT");
    printf("2 to EXIT");
    printf("ENTER YOU CHOICE:\n");
    scanf("%d",&choice);
    switch(choice){
    case 1:{
    int num;
    printf("enter:\n");
    scanf("%d",&num);
    root=insertnode(root,num);
    }
    break;
    case 2:exit(0);
    break;
    }
}


}
