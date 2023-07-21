#include <stdio.h>
#define max 10
int rear=-1;
int front=-1;
void enqueue();
void dequeue();
void show();
int main()
{
    int a[max],i,ch,n;
   while (1)
    {
        printf("\n1.Enqueue Operation\n");
        printf("\n2.Dequeue Operation\n");
        printf("\n3.Display the Queue\n");
        printf("\n4.Exit\n");
        printf("\nEnter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            enqueue();
            break;
           case 2:
            dequeue();
            break;
            case 3:
            show();
            break;
            case 4:
            break;
        }
    }
}
void enqueue(){
    int val,a[max];
    if(rear==max-1){
        printf("overflow");
    }
    else{
        front=0;
        rear=0;
        printf("enter val to insert");
        scanf("%d",&val);
        rear=rear+1;
        a[rear]=val;
    }
}
void dequeue(){
    int val,a[max];
    if(front=-1 || front>rear){
        printf("underflow");
    }
    else{
        printf("the deleted value%d",a[front]);
        front++;
    }
}
void show(){
    int val,i,a[max];
    if(front==-1){
        printf("there is nothing to show");
    }
    else{
        for(int i=front;i<=rear;i++);
        printf("the elements are:%d",a[i]);
    }
}
