#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;
};
struct node* top=NULL;
void push(){
struct node* newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("ENTER NUMBER");
scanf("%d",&newnode->data);
if(top==NULL){
    top=newnode;
    newnode->next=NULL;
}
else{
    newnode->next=top;
    top=newnode;
}
printf("DONE");
}
void display(){
    struct node* temp;
    temp=top;
    if(top==NULL){
        printf("NOTHING");
    }
    else{
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }}
   // printf("%d",top->data);
}
void pop(){
printf("%d",top->data);
top=top->next;
printf("poped");

}
void peek(){
    printf("%d",top->data);
}
void main(){
int choice;
for(;;){
    scanf("%d",&choice);
 switch(choice){
 case 1:push();
 break;
 case 2:display();
 break;
 case 3:pop();
 break;
 case 4:peek();
 break;
 case 5:exit(0);
 break;
 }
}
}


