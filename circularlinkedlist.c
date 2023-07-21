// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
}*head=NULL;
void create(){
    struct node* newnode;
    struct node* temp;
    int value,n;
    printf("ENTER NO.OF ELEMENTS");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    if(head==NULL){
        head=newnode;
        temp=newnode;
        newnode->next=head;
    }
    else{
        temp->next=newnode;
        newnode->next=head;
        temp=newnode;
    }
    }
printf("CREATED\n");
}

void display(){
    struct node* temp;
    temp=head;
if(head==NULL){
    printf("EMPTY");
}
else{
    while(temp->next!=head){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
printf("%d\n",temp->data);
}
}
void insertfirst(){
struct node* temp;
struct node* temp1;
struct node* newnode;
printf("ENTER NUMBER");
scanf("%d\n",&newnode->data);
if(head==NULL){
    printf("EMPTY");
}
else{
     while(temp->next!=head){
        temp=temp->next;
    }
    temp1=temp->next;
    temp->next=newnode;
    newnode->next=temp1;
    //temp1->next=head;
    head=temp;
}
printf("INSERTED");
}
int main(){
    int choice;
    for(;;){
        scanf("%d",&choice);
        switch(choice){
        case 1:create();
        break;
        case 2:display();
        break;
        case 3:insertfirst();
        break;
        case 4:exit(0);
        break;
        }
    }

    return 0;
}
