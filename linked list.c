#include<stdio.h>
#include<stdlib.h>
struct node //make node for linked list using structure
{
int value; //value part of node contains the element
struct node *next; //the next part of node contains the address of next element of list
};
struct node *head; //contains the address of first element of linked list
void init()
{
head=NULL; //initialize the beginning(head) of list to NULL
}
void insertfirst(int element) //inserts element in linked list
{
struct node *New;
New=(struct node*)malloc(sizeof(struct node)); //New named node declared with size of node
//declared before
New->value=element; //inserts the new element to the value part of node New
New->next=NULL; //makes the next part of node New NULL so that no garbage value remains
New->next=head; //the address of previously first node, which was stored in head is now
//assigned to next part of node New
head=New; //the address of new first element which is present in node New is assigned to
//head node
}
void insertlast(int ele) //insert at the last of linked list
{
struct node *New, *temp;//temp for traversing
//[2:20 pm, 11/08/2022] Prithiviraj:
New = (struct node*)malloc(sizeof(struct node));
if(New== NULL)
{
printf("Unable to allocate memory.");
return;
}
else
{
New->value = ele;
if(head == NULL)//when list is empty
{
New -> next = NULL;
head = New;
printf("\nNode inserted");
}
else{
New->next = NULL;//list has elements
temp = head;
while(temp->next != NULL)//list traversal
temp = temp->next;
temp->next = New;
printf("DATA INSERTED SUCCESSFULLY\n");
}}
}
void print()
{
if(head==NULL) //condition to check whether list is empty
{
printf("list is empty\n");
return;}
//[2:21 pm, 11/08/2022] Prithiviraj: }
struct node *cur=head;
int count;
count=0;
while(cur!=NULL) //the loop traverse until it gets any NULL node
{
printf("%d->",cur->value);
count++; //counts the number of nodes or elements present in list
cur=cur->next; //moves cur pointer to next node to check and get value
}
printf("NULL\n");
printf("number of nodes %d\n",count);
}
void dellsat(){

    struct node*temp,*temp_prev;
    int null;
    temp=head;
    temp_prev=null;
    while(temp->next!=null){
        temp_prev=temp;
        temp=temp->next;
    }
    temp_prev->next=null;
    free(temp);
    }
int main()
{
init();
int ch,element;
while(1)
{
printf("\n1. Insert new item in the beginning. 2. Insert Last. 3. Print.4.Exit\n--------------------------------------------------------------------------------------\n");
printf("enter choice of input: ");
scanf("%d",&ch);
if(ch==1)
{
printf("enter element to list: ");
scanf("%d",&element);
insertfirst(element);
}
//[2:21 pm, 11/08/2022] Prithiviraj:
else if(ch==2)
{
int le;
printf("enter element to insert at last ");
scanf("%d",&le);
insertlast(le);
}
else if(ch==3)
{
print();
}
else if(ch==4)
return 0;
else
return 0;
}
return 0;
}
