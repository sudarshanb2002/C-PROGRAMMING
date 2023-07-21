#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*left;
struct node*right;
};
struct  node*newnode(int val){
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->left=NULL;
newnode->right=NULL;
newnode->data=val;
return(newnode);
};
void main(){
int choice;
struct node*root=NULL;
for(;;){
    printf("ENTER YOUR CHOICE:\n");
scanf("%d",&choice);
switch(choice){
case 1:insert(root);
break;
case 2:exit(0);
break;
}
}
}

void insert(struct node*root){
    int value,n;
printf("ENTER THE NUMBER of ELEMENTS:\n");
scanf("%d",&n);
for(int i=0;i<n;i++){
        printf("enter the number:\n");
        scanf("%d",&value);
if(root==NULL){
    root=newnode(value);
    printf("ROOT");
}
else{
   if(root->left==NULL){
    root->left=newnode(value);
    printf("ROOTLEFT");
   }
   else if(root->right==NULL){
    root->right=newnode(value);
    printf("ROOTRIGHT");
   }
}

}

printf("\nINSERTED\n");
}
