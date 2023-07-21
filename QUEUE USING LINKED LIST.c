#include<stdio.h>
struct node{
int data;
struct node* next;
}*front=NULL,*rear=NULL;

void enqueue(){
    int n;
    struct node *newnode;
    printf("ENTER NUMBER OF DATA:\n");
    scanf("%d",&n);
for(int i=0;i<n;i++){
 newnode=(struct node*)malloc(sizeof(struct node));
scanf("%d",&newnode->data);
newnode->next=NULL;
if(front==NULL){
    front=newnode;
    rear=newnode;
}
else{
    rear->next=newnode;
    rear=newnode;
}
}
printf("\ndone\n");
}

void display(){
    struct node* temp;
    temp=front;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void dequeue(){
    struct node* temp1;
    temp1=front;
 front=front->next;
 free(temp1);
printf("DEQUEUE");
}
void main(){
    int choice;
    while(1){
        scanf("%d",&choice);
        switch(choice){
        case 1:enqueue();
        break;
        case 2:dequeue();
        break;
        case 3:display();
        break;
        case 4:exit(0);
        break;
        }
    }
}
