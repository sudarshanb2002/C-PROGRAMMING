/*#include<stdio.h>
#include<conio.h>
#include<string.h>
void push(char e);
char pop();
int top=-1,i,flag=1;
char e[10],stack[20];
int main(){
    char temp;
    //int i;
    printf("enter the expression");
    scanf("%s",e);
    for(i=0;e[i]!='\0';i++){
        if(e[i]=='(' || e[i]=='{' || e[i]=='[')
            push(e[i]);

       if(e[i] == ')' || e[i] == ']' || e[i] == '}')
       if(top==-1)
       flag=0;
       else
       {
           temp=pop();
           if(e[i] == ')' && (temp=='{' || temp=='['))
           flag=0;
           if(e[i] == '}' && (temp=='(' || temp=='['))
           flag=0;
           if(e[i] == ']' && (temp=='{' || temp=='('))
           flag=0;
       }}
      if(top>=0)
      flag=0;
      if(flag==1)
          printf("expression is valid");

      else
          printf("expression is invalid");


    }

void push(char e){
    top=top+1;
    stack[top]==e;
}
char pop(){
    top=top-1;
}*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20

struct stack
{
char stk[MAX];
int top;
}s;

void push(char item)
{
if (s.top == (MAX - 1))
printf ("Stack is Full\n");
else
{
s.top = s.top + 1; // Push the char and increment top
s.stk[s.top] = item;
}}

void pop()
{
if (s.top == - 1)
{
printf ("Stack is Empty\n");
}
else
{
s.top = s.top - 1; // Pop the char and decrement top
}}

int main()
{
char exp[MAX];
int i = 0;
s.top = -1;
printf("\nINPUT THE EXPRESSION : ");
scanf("%s", exp);
for(i = 0;i < strlen(exp);i++)
{
if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
{
push(exp[i]); // Push the open bracket
continue;
}
else if(exp[i] == ')' || exp[i] == ']' || exp[i] == '}') // If a closed bracket is encountered
{
if(exp[i] == ')')
{
if(s.stk[s.top] == '(')
{
pop(); // Pop the stack until closed bracket is found
}
else
{
printf("\nUNBALANCED EXPRESSION\n");
break;
}}
if(exp[i] == ']')
{
if(s.stk[s.top] == '[')
{
pop(); // Pop the stack until closed bracket is found
}
else
{
printf("\nUNBALANCED EXPRESSION\n");
break;
}}
if(exp[i] == '}')
{
if(s.stk[s.top] == '{')
{
pop(); // Pop the stack until closed bracket is found
}
else
{
printf("\nUNBALANCED EXPRESSION\n");
break;
}}}}
if(s.top == -1)
{
printf("\nBALANCED EXPRESSION\n"); // Finally if the stack is empty, display that the expression is balanced
}}
