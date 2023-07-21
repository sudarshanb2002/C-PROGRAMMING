#include<stdio.h>
#define max 10
int top=-1,stack[max],stack1[max],top1=-1;
void push(char s){
    //int top=-1,stack[max],value;
    int value;
    if (top==max-1){
        printf("Overflow");
    }
    else{
        top=top+1;
        stack[top]=s;
    }
}
void push1(char s){
    //int top=-1,stack[max],value;
    int value;
    if (top1==max-1){
        printf("Overflow");
    }
    else{
        top1=top1+1;
        stack[top1]=s;
    }
}
void pop(){
    //int top=-1,stack[max],value;
    if(top==-1){
        printf("underflow");
    }
    else{

       // printf("the number poped %d",stack[top]);
        top=top-1;
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
        printf("%c",stack[i]);}
    }
}
char peek(){
    //int top=-1,stack[max],value;
    if(top==-1){
        printf("stack is empty");
    }
    else{
        return stack[top];
    }
}
void main(){
    char str[50];
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='*'||str[i]=='('){
            push(str[i]);
            }
}
if(peek()=='*'){
  for(int i=0;i<strlen(str);i++){
    if(str[i]=='('){
        push1();
       }
       else if(str[i]==')'){
        pop();
       }
  }
}
else {
  for(int i=top;i>=0;--i){
    if(str[top]=='('||str[top]=='*'){
        pop();
    }
  }
}

display();
//printf("%c",peek());
/*if(top==-1){
    printf("yes");
}
else{
    printf("no");
}*/
}
