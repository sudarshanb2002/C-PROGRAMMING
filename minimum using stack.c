#include<stdio.h>
#include<conio.h>
#define max 6
int top1=-1,top2=-1;
int stack1[max];
int stack2[max];
void push1(int a){
if(top1==max-1){
    printf("OVERFLOW");
}
else{
top1++;
stack1[top1]=a;
}
printf("stack:%d",stack1[0]);
printf("DONE");
}

void push2(int b){
if(top2==max-1){
    printf("OVERFLOW");
}
else{
top2=top2+1;
stack2[top2]=b;
}
printf("DONE");
}
void  pop1(){
 if(top1==-1){
        printf("underflow");
    }
    else{
printf("%d",top1);
        printf("the number poped %d",stack1[top1]);
        top1=top1-1;
    }
//return top1;
}
void pop2(){
 if(top2==-1){
        printf("underflow");
    }
    else{

        printf("the number poped %d",stack2[top2]);
        top2=top2-1;
    }

}


void main(){
int choice;
int a[max];
int x,y;
scanf("%d",&x);
push1(x);
printf("\n");
pop1();

}
