#include<stdio.h>
struct node{
int data;
struct node* next;
struct node*pre;
}*head,*tail;

void create(){
struct node* newnode;
int n;
printf("ENTER NO OF ELEMENTS");
scanf("%d",&n);
for(int i=0;i<n;i++){
int value;
printf("ENTER A NUMBER");
scanf("%d",&value);
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=value;
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
}
printf("created");
}
void doubletraverse()
{
    struct node* prev;
    //temp=head;
    prev=tail;
    while(prev!=NULL)
    {
        printf("\nThe Elements:%d",prev->data);
        prev=prev->pre;
    }
}
void display(){
    struct node* temp;
    temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void insertfirst(){
struct node* newnode;
struct node* temp;
temp=head;
newnode=(struct node*)malloc(sizeof(struct node));
scanf("%d",&newnode->data);
newnode->next=head;
head=newnode;
}
void insertend(){
struct node* newnode;
struct node* temp;
temp=head;
newnode=(struct node*)malloc(sizeof(struct node));
scanf("%d",&newnode->data);
newnode->next=NULL;
newnode->pre=NULL;
while(temp->next!=0){
    temp=temp->next;
}
temp->next=newnode;
newnode->pre=temp;
newnode->next=NULL;
}
void insertpos(){
int pos;
struct node* newnode;
struct node* temp;
struct node* temp2;
temp=head;
newnode=(struct node*)malloc(sizeof(struct node));
printf("ENTER POSITION");
scanf("%d",&pos);
printf("ENTER VALUE");
scanf("%d",&newnode->data);
newnode->next=NULL;
newnode->pre=NULL;
while(pos!=1){
    temp=temp->next;
    pos--;
}
temp2=temp->next;
temp->next=newnode;
temp2->pre=newnode;
newnode->next=temp2;
newnode->pre=temp;
printf("INSERTED");
}
void deletefirst(){
struct node* temp;
temp=head;
head=head->next;
head->pre=NULL;
free(temp);
printf("DELETED\n");
}
void deleteend(){
struct node* temp;
temp=tail;
tail=tail->pre;
tail->next=NULL;
temp->pre=NULL;
printf("deleted");
}
void main(){
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
/*case 4:insertend();
break;*/
case 4:insertpos();
break;
case 5:deletefirst();
break;
case 6:deleteend();
break;
case 7:doubletraverse();
break;
case 8:exit(0);
break;
}
}
}
