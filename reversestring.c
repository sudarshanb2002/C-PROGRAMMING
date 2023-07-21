#include<stdio.h>
#include<string.h>
#define max 100
//Technical Interview Preparation
int stack[max],top=-1;
void main(){
char str[100];
scanf("%[^\n]",str);
/*for(int i=0;i<strlen(str);i++){
    if(str[i]!=" "){
            top=top+1;
    stack[top]=str[i];
    }
}*/
for(int i=strlen(str);i>0;i--){
    top=top+1;
    stack[top]=str;
}
for(int i=0;i<strlen(str);i++){
    printf("%s",stack[top]);
    top--;
}

}
