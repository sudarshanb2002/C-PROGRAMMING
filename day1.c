#include <stdio.h>

int main() {
    // Write C code here
    int n,k;
     scanf("%d",&n);
     scanf("%d",&k);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
          if(a[i]>a[j]){
              int temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }
      }
    }
    for(int i=0;i<n;i++){
       b[i]=a[i];
    }
    printf("\n%d",b[k-1]);
    return 0;
}
