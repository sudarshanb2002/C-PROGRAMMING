#include <stdio.h>
#include<conio.h>
#define max 5
void push();
void pop();
void peek();
void display();
int top=-1,stack[max];

void main(){
    //int top=-1,stack[max],value,ch;
    int ch;
    printf("enter your choice");
    for(;;){
        printf("\n1 for push");
        printf("\n2 for pop");
        printf("\n3 for display");
        printf("\n4 for peek");
        printf("\n5 for exit");
        printf("\nenter your choice");
        scanf("%d",&ch);

    switch(ch){
        case 1 : push();
        break;
        case 2 : pop();
        break;
        case 3 : display();
        break;
        case 4 : peek();
        break;
        case 5: exit(0);
        break;
    }

}
}
void push(){
    //int top=-1,stack[max],value;
    int value;
    if (top==max-1){
        printf("Overflow");
    }
    else{
        printf("enter number to push");
        scanf("%d",&value);
        top=top+1;
        stack[top]=value;
    }
}
void pop(){
    //int top=-1,stack[max],value;
    if(top==-1){
        printf("underflow");
    }
    else{

        printf("the number poped %d",stack[top]);
        top=top-1;
    }
}
void peek(){
    //int top=-1,stack[max],value;
    if(top==-1){
        printf("stack is empty");
    }
    else{
        printf("%d",stack[top]);
    }
}



void display(){
    // int stack[max],value;
    int i;
    if(top==-1){
        printf("stackisempty");
    }
    else
    {
        for(i=top;i>=0;--i){
        printf("%d",stack[i]);}
    }
}
