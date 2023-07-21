#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node{
    char *str;
    struct node*next;
}*head=NULL,*temp;
void create(char *a){
    struct node*newnode;
    //struct node *temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
   // printf("%s",a);
    newnode->str=a;
    //wnode->str=a;
    if(head==NULL){
        head=newnode;
        temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
   // printf("CREATED");
        //printf("%s",head->str);
       // printf("%s",temp->str);

}
void display(){

temp=head;
while(temp!=NULL){
    printf("%s",temp->str);
    temp=temp->next;
}
}
void main(){
    char str[50]="i love rathinam";
    char *word;
    word=strtok(str," ");
    while(word!=NULL){
    //printf("%s ",word);
    create(word);
    word=strtok(NULL," ");
}
display();
struct node *pre=NULL;
struct node *cur=head;
struct node *nex=NULL;
while(cur!=NULL){
    nex=cur->next;
    cur->next=pre;
    pre=cur;
    cur=nex;
}
printf("\n");
while(pre!=NULL){
    printf("%s ",pre->str);
    pre=pre->next;
}
//print();
}
