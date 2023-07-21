#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<conio.h>
struct node{
        int data;
        struct node * next;
    }*head;
void insertbeginning(){
    int element;
    printf("enter number to insert\n");
    scanf("%d",&element);
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=element;
    newnode->next=0;
    if(head==0){
        head=newnode;
        printf("node is inserted\n");
    }
    else{
        newnode->next=head;
        head=newnode;
        printf("node inserted\n");
    }
}
void insertend(){
    int element;
    printf("enter the value to end");
    scanf("%d",&element);
    struct node*newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=element;
    newnode->next=0;
    temp=head;
    if(head==0){
        printf("list is empty");
    }
    else{
        while(temp->next!=0){
            temp=temp->next;
        }
        temp->next=newnode;
        printf("node inserted");
    }
}
void insertafter(){
     int element,pos,i;
    printf("enter postion");
    scanf("%d",&pos);
    if(head==0){
        printf("list is empty");
    }
else{
     struct node*newnode,*temp;
        temp=head;
        while(i<pos){
            temp=temp->next;
            i++;
        }
    printf("enter element\n");
    scanf("%d",&element);
    //struct node*newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=element;
    //newnode->next=0;
    newnode->next=temp->next;
    temp->next=newnode;
    }
}
void print(){
    struct node *temp;
    //head=0;
    temp=head;
   if(head==0){
       printf("list is empty");
   }
   else{
       printf("the element in the list are\n");
       while(temp!=0){
           printf("%d",temp->data);
           temp=temp->next;
       }
      // printf("%d",temp->data);
   }
   printf("\n");
}
void deletefront(){
    struct node *temp;
    temp=head;
    printf("%d\n",temp->next->data);
    head=temp->next;
    free(temp);
    printf("DELETED");
}
int main(){
    int choice;
    head=NULL;
for(;;){
    printf("press1-insert at beginning\n");
    printf("press2-insert at end\n");
    printf("press3-insert after a given node\n");
    printf("press4-toprint");
    printf("press5-to delete");
    printf("press4-exit\n");
    printf("enter your choice");
    int choice;
    scanf("%d",&choice);
     switch(choice){
         case 1:insertbeginning();
         break;
         case 2:insertend();
         break;
         case 3:insertafter();
         break;
         case 4: print();break;
         case 5:deletefront();
         break;
         case 6:exit(0);
         break;
         }
}
    return 0;
}
