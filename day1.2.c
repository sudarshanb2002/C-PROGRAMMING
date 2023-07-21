#include <stdio.h>

int main() {
    // Write C code here
    int a[] = {1, 2, 4, 5, 7};
   int b[] = {5, 6, 3, 4, 8};
   for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++){
      for(int j=i+1;j<(sizeof(a)/sizeof(a[0]));j++){
          if(a[i]>a[j]){
              int temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }
      }
   }
    for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++){
        printf("%d",a[i]);
    }

    for(int i=0;i<(sizeof(b)/sizeof(b[0]));i++){
      for(int j=i+1;j<(sizeof(b)/sizeof(b[0]));j++){
          if(b[i]>b[j]){
              int temp=b[i];
              b[i]=b[j];
              b[j]=temp;
          }
      }
   }
   printf("\n");
   for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++){
        printf("%d",b[i]);
    }
    printf("\n");
     int sum;
    for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++){
        sum=0;
       for(int j=0;j<(sizeof(b)/sizeof(b[0]));j++){
          sum=a[i]+b[j];
            if(sum==9){
                printf("%d %d\n",a[i],b[j]);
            }
       }
   }

}
