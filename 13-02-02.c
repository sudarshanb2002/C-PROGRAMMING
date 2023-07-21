#include<stdio.h>
#include<stdlib.h>
struct node{
char data;
struct node *next;
struct node *pre;
}*head=NULL,*tail;
void main(){
int n;
struct node *newnode;
struct node *temp;
scanf("%d",&n);
char ch[n];
for(int i=0;i<n;i++){
    scanf(" %c",&ch[i]);
}
for(int i=0;i<n;i++){
    newnode=(struct node*)malloc(sizeof(struct node));
    //scanf(" %c",&newnode->data);
    newnode->data=ch[i];
    newnode->next=NULL;
    newnode->pre=NULL;
    if(head==NULL){
       head=newnode;
       tail=newnode;
    }
    else{
        tail->next=newnode;
        newnode->pre=tail;
        tail=newnode;
    }
    temp=head;
    int count=0;
    while(temp!=NULL){
        printf(" %c",temp->data);
        temp=temp->next;
    }
    //printf("%c",temp->data);
}

}
