#include <stdio.h>

int main()
{
    int n,l;
    scanf("%d",&n);
    for(int i=-n;i<=n;i++){
        if(i<0){
            l=-i;
        }
        else{
            l=i;
        }
       for(int j=0;j<2*n-l+1;j++){
        if(j<l){
            printf("  ");
        }
        else{
            printf("* ");
        }
       }
        printf("\n");
    }

    return 0;
}
