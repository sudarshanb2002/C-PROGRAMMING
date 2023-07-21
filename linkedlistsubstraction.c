#include<stdio.h>
#include<stdlib.h>
struct node1{
int data;
struct node1* next;
}*head1=NULL;
struct node2{
int data;
struct node2* next;
}*head2=NULL;
void main(){
int choice;
int count1=0;
int count2=0;
for(;;){
scanf("%d",&choice);
switch(choice){
    case 1:{
    int n;
    struct node1* newnode1;
    struct node1* temp1;
    printf("ENTER NO. OF VALUE:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    newnode1=(struct node1*)malloc(sizeof(struct node1));
    scanf("%d",&newnode1->data);
    newnode1->next=NULL;
    if(head1==NULL){
        head1=newnode1;
        temp1=newnode1;
    }
    else{
        temp1->next=newnode1;
        temp1=newnode1;
    }
    }
    printf("CREATED");

    }
break;
case 2:{
    struct node1* temp3;
    temp3=head1;
while(temp3!=NULL){
    printf("%d",temp3->data);
    count1=(count1*10)+(temp3->data);
    temp3=temp3->next;
}
}
break;
case 3:{
int n;
    struct node2* newnode2;
    struct node2* temp2;
    printf("ENTER NO. OF VALUE:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    newnode2=(struct node2*)malloc(sizeof(struct node2));
    scanf("%d",&newnode2->data);
    newnode2->next=NULL;
    if(head2==NULL){
        head2=newnode2;
        temp2=newnode2;
    }
    else{
        temp2->next=newnode2;
        temp2=newnode2;
    }
    }
    printf("CREATED");
}
break;
case 4:{
    struct node2* temp4;
    temp4=head2;
while(temp4!=NULL){
    printf("%d",temp4->data);
    count2=(count2*10)+(temp4->data);
    temp4=temp4->next;
}
}
break;
case 5:{
printf("%d",count1-count2);
}
break;
case 6:exit(0);
break;
}
}
}
