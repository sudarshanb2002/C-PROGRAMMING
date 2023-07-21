#include<stdio.h>
int factorial(int n){
int f=1;
for(int i=n;n>1;n--){
    f=f*n;
}
return f;
}
void main(){
int n,r;
scanf("%d",&n);
scanf("%d",&r);
int result=factorial(n)/factorial(n-r);
   printf("POSSIBILITIES: %d",result);
}
