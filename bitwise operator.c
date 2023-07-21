#include<stdio.h>
void
void main(){
    int i,j,valueand,n,th,a[50],z,t;
    scanf("%d",&n);
    //anf("%d",&th);
    for(i=1;i<n+1;i++)
    {
        a[i]=i;
        printf("%d",a[i]);
}
    for(i=1;i<n;i++){
    for(j=a[i+1];j<n+1;j++){
            z=a[i];
            t=j;
        //  printf("%d",z);
         // printf("%d",t);
            valueand=z&t;
            printf("\n%d",valueand);
        }

    }
}
