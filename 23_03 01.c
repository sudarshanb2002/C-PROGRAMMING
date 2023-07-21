#include<stdio.h>
void main(){
char a[50];
scanf("%s",a);
for(int i=0;a[i]!='\0';i=i+2){
    int k=a[i+1]-48;
    for(int j=0;j<k;j++){
        printf("%c",a[i]);
    }
}
}
