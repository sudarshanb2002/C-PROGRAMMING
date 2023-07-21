#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
    struct node* pre;
}*head,*tail;
void main()
{
    int choice;
   head=NULL;
    for(;;){
        scanf("%d",&choice);
        switch(choice){
        case 1:{
            int value;
            struct node* newnode;
            struct node* temp;
        scanf("%d",value);
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->pre=NULL;
        newnode->data=value;
        newnode->next=NULL;
        if(head==NULL){
            head=tail=newnode;
            temp=newnode;
        }
        else{
                 temp->next=newnode;
                   newnode->pre=temp;
                   temp=newnode;
                   tail=newnode;
        }
        printf("CREATED");
        }
        break;
        case 2:{
             struct node* temp;
             temp=head;
        if(head==NULL){
            printf("EMPTY");
        }
        else{
            while(temp!=0){
                printf("%d ",temp->data);
                temp=temp->next;
            }
        }
        }
        break;
        case 3:exit(0);
        break;
       /* case 3:{
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->pre=NULL;
        newnode->data=value;
        newnode->next=NULL;
        }
        break;*/
        }
    }
}
