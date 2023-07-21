#include<stdio.h>
#include<math.h>
//#define MIN(i, j) (((i) < (j)) ? (i) : (j))
int min(int num1, int num2)
{
    // using the conditional operator to calcualte the min
    return (num1 > num2) ? num2 : num1;
}
void main(){
int coin[]={1,3,5,9};
int n;
scanf("%d",&n);
int a[sizeof(coin)/sizeof(coin[0])][n];
int b=0;
for(int i=0;i<sizeof(coin)/sizeof(coin[0]);i++){
    a[i][0]=0;
}
for(int i=0;i<n;i++){
    a[0][i]=i;
}
for(int i=1;i<sizeof(coin)/sizeof(coin[0]);i++){
    for(int j=1;j<n;j++){
     if(coin[i]>n){
       a[i][j]=a[i-1][j];
     }
     else{
        a[i][j]=min(a[i-1][j],1+a[i][j-coin[i]]);
        }
    }
}
for(int i=0;i<sizeof(coin)/sizeof(coin[0]);i++){
    for(int j=0;j<n;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
    }
}
