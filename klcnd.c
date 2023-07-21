// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#define max 20
int stack1[max],stack2[max],top1=-1,top2=-1;
int main() {
    int choice;
    for(;;){
        scanf("%d",&choice);
        switch(choice){
            case 1:{

                int value;
                scanf("%d",&value);
                    top1++;
                    stack1[top1]=value;
                    printf("done");
            }
            break;
            case 2:{
                 for(int i=top1;i>=0;--i){
        printf("%d",stack1[i]);
            }
        }
        break;
        case 3:{

    }
    break;
}}}
