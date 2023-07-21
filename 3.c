#include<stdio.h>
void main(){
//int a[]={0,1,0,1};
int a[]={1,0,0,0,0};
int n=sizeof(a)/sizeof(a[0]);
int count=0;
for(int i=0;i<n;i++){
    if(a[i]==0){
        a[i]++;
        for(int j=i+1;j<n;j++){
            if(a[j]==0){
                a[j]++;
            }
            else if(a[j]==1){
                a[j]--;
            }
        }
        count++;
    }
}
printf("%d\n",count);
for(int i=0;i<n;i++){
    printf("%d",a[i]);
}
}
