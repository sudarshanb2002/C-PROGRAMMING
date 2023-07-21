#include<stdio.h>
#include<string.h>
void main(){
    int arr[50],count=0,n,i;
    char gender;
    scanf("\n%c",&gender);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    //scanf("\n%c",&gender);
    if(gender=='b'){
        for(i=0;i<n;i+=2){
        count=count+arr[i];}
    }
    if(gender=='g'){
       for(i=1;i<n;i++){
        count=count+arr[i];}
    }
    //return 0;
}
