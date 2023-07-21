#include<stdio.h>
struct node{
int data;
struct node* next;
struct node*pre;
}*head=NULL;
void main(){
int n;
printf("ENTER NO OF ELEMENTS");
scanf("%d",&n);
struct node *newnode;
struct node *temp;
for(int i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->pre=NULL;
        if(head==NULL){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            newnode->pre=temp;
            temp=newnode;
        }
}
struct node *temp1;
temp1=head;
while(temp1!=NULL){
    printf("%d",temp1->data);
    temp1=temp1->next;
}

}
