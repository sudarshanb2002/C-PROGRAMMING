#include<stdio.h>
#include<string.h>
void main(){
char s[20];
char goal[20];
gets(s);
gets(goal);

int  result=strcmp(s,goal);
printf("%d",result);
 for(int i=0;i<strlen(s);i++){
 for(int j=i+1;j<strlen(s);j++){
    char temp=s[i];
    s[i]=s[j];
    s[j]=temp;
 }
}
puts(s);
}
