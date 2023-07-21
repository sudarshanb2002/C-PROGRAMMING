// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    int arr[]={-1,-1,-1,-1,-1,-1,-1};
    int sum=0;
    scanf("%d",&n);
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
            //int a=0;
    for(int i=2;i<=n;i++){
        sum=arr[i-1]+arr[i-2];
       arr[i]=sum;
    }}
   // for(int i=0;i<n;i++){
        //printf("%d\n",arr[i]);
    //}


  printf("%d",arr[n]);
    return 0;
}
