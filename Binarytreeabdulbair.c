#include<stdio.h>
#include<stdlib.h>
struct node{
struct node*lchild;
struct node*rchild;
int data;
};
struct queue{
int size;
int front;
int rear;
struct node **Q;
};
struct node*root=NULL;
void create(struct queue *q,int size){
q->size=size;
q->front=q->rear=0;
q->Q=(struct node **)malloc(q->size*sizeof(struct node *));
printf("CREATED");
}
void enqueue(struct queue*q,struct node* x){
    if(q->rear==q->size-1){
        printf("queue is full");
    }
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }
    printf("inserted\n");
}

struct node* dequeue(struct queue*q){
struct node* x=NULL;
if(q->front==q->rear){
    printf("empty");
}
else{
q->front++;
x=q->Q[q->front];
}
printf("\n%d\n",x);
printf("dequeued\n");
return x;
}
void display(struct queue*q){

    for(int i=q->front+1;i<=q->rear;i++){
        printf("%d\n",q->Q[i]);
    }
}
int isempty(struct queue *q){
    return q->front==q->rear;
}
void createtree()
{
struct node *p,*t;
int x;
struct queue *q;
create(&q,100);
printf("enter root");
scanf("%d",&x);
root=(struct node*)malloc(sizeof(struct node));
root->data=NULL;
root->lchild=root->rchild=NULL;
enqueue(&q,root);
while(!isempty(q)){
    p=dequeue(&q);
    printf("enter left child");
    scanf("%d",&x);
    if(x!=-1){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=x;
        t->lchild=t->rchild=NULL;
        p->lchild=t;
        enqueue(&q,t);
    }
    printf("enter right child");
    scanf("%d",&x);
    if(x!=-1){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=x;
        t->lchild=t->rchild=NULL;
        p->rchild=t;
        enqueue(&q,t);
    }
}
}

void main(){
createtree();
}
