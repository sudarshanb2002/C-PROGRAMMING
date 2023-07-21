 #include<stdio.h>
 #include<stdlib.h>
 struct node{
   int data;
   struct node* next;
 }*head=NULL;
 void main(){
   int n=5;
   int a[5]={1,2,3,4,5};
   int pos=2;
   struct node *newnode;
   struct node *temp;
   struct node *cur;
   struct node *curnext;
   //struct node *temp1=head;
   for(int i=0;i<n;i++){
     newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=a[i];
     newnode->next=NULL;
     if(head==NULL){
       head=newnode;
       temp=newnode;
     }
     else{
       temp->next=newnode;
       temp=newnode;
     }
   }
   cur=head;
   curnext=head;
  while(curnext!=NULL){
    for(int i=0;i<pos;i++){
      curnext=curnext->next;
    }
    int temp=curnext->data;
    curnext->data=cur->data;
    cur->data=temp;
    cur=curnext->next;
  }
  struct node *temp1;
  temp1=head;
   while(temp1!=NULL){
     printf("%d ",temp1->data);
     temp1=temp1->next;
   }
 }
