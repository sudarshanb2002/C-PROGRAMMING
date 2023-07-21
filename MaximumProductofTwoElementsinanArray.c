#include <stdio.h>

int main() {
    int a[4]={3,4,5,2};
    int max=0;
    int b,c;
    for(int i=0;i<4;i++){
       for(int j=i+1;j<4;j++){
           if(a[i]*a[j]>max){
               max=a[i]*a[j];
               b=a[i];
               c=a[j];
           }

       }
    }

printf("%d",((b-1)*(c-1)));
    return 0;
}
