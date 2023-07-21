#include<stdio.h>
#include<string.h>
void main(){
char str[20]="i love rathinam";
char *word;
word=strtok(str," ");
while(word!=NULL){
    printf("%s",word);
    word=strtok(NULL," ");
}
}
