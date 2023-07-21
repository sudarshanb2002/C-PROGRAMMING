#include<stdio.h>
void main(){
int a[5][5];
int n=5;
int count=0;
int rowmin=0,rowmax=n-1,colmin=0,colmax=n-1;
while(rowmin<rowmax){
    for(int i=0;i<=colmax;i++){
        a[rowmin][i]=count++;
        printf("%d ",a[rowmin][i]);
    }
    printf("\n");
    for(int i=rowmin+1;i<=rowmax;i++){
    a[i][colmax]=count++;
    printf("%d ",a[i][colmax]);
    }
    printf("\n");
    for(int i=colmax-1;i>=colmin;i--){
        a[rowmax][i]=count++;
        printf("%d ",a[rowmax][i]);
    }
    printf("\n");
    for(int i=rowmax-1;i>=rowmin+1;i--){
        a[i][colmin]=count++;
        printf("%d ",a[i][colmin]);
    }
    printf("\n");
    rowmin++;
    rowmax--;
    colmin++;
    colmax--;
}
}
