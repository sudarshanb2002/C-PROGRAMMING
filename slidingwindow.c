#include<stdio.h>
void main(){
int a[]={1, 2, 3, 1, 4, 5, 2, 3, 6};
int n;
//scanf("%d",&n);
int sum=0;
int b[10];
//int i,j;
for(int i=0;i<=(sizeof(a)/sizeof(a[0]))-n;i++){
        int max=a[i];
   for(int j=i+1;j<n+i;j++){
    if(max<a[j]){
        max=a[j];
    }
   }
   printf("%d",max);
   max=0;

}
//printf("%d",max);
}
