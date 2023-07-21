#include<stdio.h>
int stack[20];
int top=-1;
void push(int);
int pop();
void main(){
    int arr[20],val,n,i,temp;
    printf("enter no. of values in array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
        push(arr[i]);

    for(i=0;i<n;i++){
        temp=pop();
        arr[i]=temp;
    }
    printf("the reversed list\n");
    for(i=0;i<n;i++)
      printf("%d",arr[i]);
}
void push(int temp){
    stack[++top]=temp;
}
int pop(){
    return(stack[top--]);
}
