#include<stdio.h>
int factorial(int n){
    int f=1;
    f=f*n;
    if(n>0){
            printf("%d",f);
    factorial(n-1);
    }
    return f;
}
void main(){
int n,r;
scanf("%d",&n);
scanf("%d",&r);
int result=factorial(n);
printf("%d",result);
}
