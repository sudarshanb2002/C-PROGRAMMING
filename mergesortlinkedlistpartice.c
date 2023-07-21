#include<stdio.h>
#include<conio.h>
struct node1{
int data;
struct node* next;
struct node* rear;
}*head1=NULL,*temp1,*print;
struct node2{
int data;
struct node*next;
struct node*rear;
}*head2=NULL;
void main(){
    int n;
    struct node1* newnode1;
    printf("enter no. of elements in list 1:");
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
    newnode1=(struct node1*)malloc(sizeof(struct node1));
    scanf("%d",&newnode1->data);
    newnode1->next=NULL;
    newnode1->rear=NULL;
    if(head1==NULL){
        head1=newnode1;
        temp1=newnode1;
    }
    else{
        temp1->next=newnode1;
        temp1=newnode1;
    }
    }
    print=head1;
    while(print!=NULL){
        printf("%d",print->data);
        print=print->next;
    }

}
