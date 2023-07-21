#include<stdio.h>
#define max 50
int stack[max],top=-1;
int  push(){
    int count;
int n;
scanf("%d",&n);
top++;
stack[top]=n;
count++;
printf("inserted");
return count;
}
int  peek(){
return stack[top];
}
void mid(int n,int current){
    if(current==-1){
        return;
    }
    int x=peek();
    pop();




}
void main(){
int choice;
int k;
for(;;){
scanf("%d",&choice);
switch(choice){
case 1: k=push();
break;
case 2:mid(k);
break;
case 3:exit(0);
break;
 }
}
}

