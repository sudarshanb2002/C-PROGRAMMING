#include<stdio.h>
#include<string.h>
//Technical Interview Preparation
int main()
{

    char a[100],b[100];
    int i,j=0;
scanf("%[^\n]s",&a);

   int s=strlen(a)-1;
   int e=strlen(a)-1;
   while(s>0)
   {

    if(a[s]==' ')
    {
        i=s+1;
        while(i<=e)
        {
        b[j]=a[i];
        j++;
        i++;
        }
        b[j++]=' ';
         e=s-1;
    }
   s--;
   }

   for(i=0;i<=e;i++)
   {
       b[j]=a[i];
       j++;
   }
   b[j]=' ';
   printf("%s",b);

}
