// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
}*head;
int main(){
   int choice;
   head=NULL;
   for(;;){
        scanf("%d",&choice);
       switch(choice){
           case 1:{
               int value;
               scanf("%d",&value);
               struct node* temp;
               struct node* newnode;
               newnode=(struct node*)malloc(sizeof(struct node));
               newnode->data=value;
                newnode->next=NULL;
                if(head==NULL){
                    head=temp=newnode;
                }
                else{
                        temp->next=newnode;
                        temp=newnode;
                    }
                    printf("\nINSERTED\n");
                }
           break;
           case 2:{
               struct node *temp;
    //head=0;
    temp=head;
   if(head==0){
       printf("list is empty");
   }
   else{
       printf("the element in the list are\n");
       while(temp->next!=0){
           printf("%d ",temp->data);
           temp=temp->next;
       }
       printf("%d ",temp->data);
   }
           }
           break;
       case 3:{
           struct node* temp;
           struct node* tempnext;
            temp=head;
            tempnext=NULL;
            if(head==NULL){
                printf("empty");
            }
            else{
            while(temp!=NULL){
                tempnext=temp->next;
                while(tempnext!=NULL){
                    if(temp->data>tempnext->data){
                        int l=temp->data;
                        temp->data=tempnext->data;
                        tempnext->data=l;
                    }
                    tempnext=tempnext->next;
                }
                temp=temp->next;
            }

            }
            printf("SORTED");
    }
       break;
       case 4:{
    struct node *temp;
    temp=head;
    printf("%d\n",temp->next->data);
    head=temp->next;
    free(temp);
    printf("DELETED");
}
       break;
       case 5:exit(0);
       break;
   }




   }
    return 0;
}
