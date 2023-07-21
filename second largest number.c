#include <stdio.h>

int main()
{
   int a[50],n,i,l1=0,l2=l1,max1,max2;
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   if(a[0]>a[1]){
       max1=a[0];
      max2=a[1];
   }
   else{
       max1=a[1];
       max2=a[0];
   }
   for(i=2;i<=n-1;i++){
       if(a[i]>max1){
           max2=max1;
           max1=a[i];
       }
       else if(a[i]>max2){
           max2=a[i];
       }
   }


   printf("the largest %d",max1);
   printf("the second largest %d",max2);


    return 0;
}
