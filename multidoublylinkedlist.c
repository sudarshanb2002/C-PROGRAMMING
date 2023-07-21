#include<stdio.h>
struct node
{
int data;
struct node* next;
struct node* pre;
struct node* child;
};


struct node* create(int x[],int size){
struct node* head=NULL;
struct node* tail=NULL;
struct node* temp=NULL;
for(int i=0;i<size;i++){
struct node* newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x[i];
newnode->next=NULL;
newnode->pre=NULL;
newnode->child=NULL;
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
}
printf("done\n");
return head;
}
void print(struct node *a){
    struct node* temp;
    temp=a;
while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
}
}

struct node* flatten(struct node* head){
struct node *cur=head;
struct node *tail=head;
while(cur){
    struct node *child=cur->child;
    struct node *nextnode=cur->next;
    if(child){
        struct node *tailchild=flatten(child);
        tailchild->next=nextnode;

        if(nextnode){
            nextnode->pre=tailchild;
        }
        cur->next=child;
        child->pre=cur;
        cur->child=NULL;
        cur=tail;
    }
    else{
        cur=cur->next;
        if(cur){
            tail=cur;
        }

    }

}
printf("done");
return tail;

}

void main(){
int choice;
struct node*head=NULL;
struct node* tail;
int a[]={1,2,3,4,5,6};
int b[]={7,8,9,10};
int c[]={11,12};
struct node* head1=create(a,6);
struct node* head2=create(b,4);
struct node* head3=create(c,2);
print(head1);
printf("\n");
print(head2);
printf("\n");
print(head3);
printf("\n");
head1->next->next->child=head2;
head2->next->child=head3;
flatten(head1);
print(head1);
}

