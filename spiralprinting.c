// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int n=sizeof(a[0])/sizeof(int);
    int m=sizeof(a)/sizeof(int)/n;
    printf("%d\n%d\n",m,n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
          printf("%d",a[i][j]);
        }
        printf("\n");
    }
    int k=0,l=0;
    while(k<m&&l<n){
        for(int i=l;i<n;i++){
            printf("%d ",a[k][i]);
        }
        k++;
        for(int i=k;i<m;i++){
             printf("%d ",a[i][n-1]);
        }
        n--;
        if(k<m){
            for(int i=n-1;i>=l;i--){
                printf("%d ",a[m-1][i]);
            }
        }
        m--;
        if(l<n){
            for(int i=m-1;i>=k;i--){
                printf("%d ",a[i][l]);
            }
            l++;
        }
    }

    return 0;
}
