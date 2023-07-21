#include<stdio.h>
#include<stdlib.h>
struct queue{
int size;
int front;
int rear;
int *Q;
};
void create(struct queue *q,int size){
q->size=size;
q->front=q->rear=0;
q->Q=(int*)malloc(q->size*sizeof(int));
printf("CREATED");
}
void enqueue(struct queue*q,int x){
    if(q->rear==q->size-1){
        printf("queue is full");
    }
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }
    printf("inserted\n");
}
void dequeue(struct queue*q){
int x=-1;
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
void main(){
struct queue q;
create(&q,5);
enqueue(&q,10);
enqueue(&q,20);
enqueue(&q,30);
display(&q);
dequeue(&q);
display(&q);

}
