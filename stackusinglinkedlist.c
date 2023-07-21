#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node*top=0;
void push(int x){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
    printf("sucess!!..");
}
void display(){
    struct node*temp;
    if(top==0){
        printf("nothing to show!");
    }
    else{
        while(temp!=0){
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}
void peek(){
    if(top==0){
        printf("nothing");
    }
    else{
        printf("%d",top->data);
    }
}
void pop(){
    struct node*temp;
    temp=top;
    if(top==0){
        printf("underflow");
    }
    else{
        printf("the poped element%d\n",top->data);
        top=top->next;
        free(temp);
    }
}
int main(){
    push(11);
    push(22);
    push(33);
    display();
    pop();
    display();
    return 0;
}
