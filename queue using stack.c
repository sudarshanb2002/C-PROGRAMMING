#include<stdio.h>
#include<conio.h>
void push();
void pop();
void display();

int stack1[30],stack2[30],size,top1=-1,top2=-1;
void main(){
    int choice;
    printf("enter the size of queue");
    scanf("%d",&size);
    while(1){
        printf("\n1.insert\n2.delete\n3.display\n4.exit");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice){
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:
            break;
            default:
            printf("\nwrong choice");
        }

    }
}
void push(){
    int item;
    if(top1==size-1){
        printf("stackoverflow");
    }
    else{
        printf("enter the value to insert");
        scanf("%d",&item);
        top1++;
        stack1[top1]=item;
    }

}
void pop(){
    while(top1!=-1){
        top2++;
        stack2[top2]=stack1[top1];
        top1--;
    }
    printf("the deleted value%d",stack2[top2]);
    top2--;
    while(top2!=-1){
        top1++;
        stack1[top1]=stack2[top2];
        top2--;
    }
}
void display(){
    int index;
    if(top1==-1){
        printf("\nqueue underflow\n");
    }
    else{
        printf("the value of the queue are ");
        for(index=0;index<=1;index++){
            printf("%d",stack1[index]);
        }
    }
}
