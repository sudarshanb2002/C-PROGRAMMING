#include <stdio.h>

int main()
{
    int n,a[20],b,i,j,temp;
    scanf("%d",&n);
    for(b=0;b<n;b++){
        scanf("%d",&a[b]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
        printf("%d",a[i]);
    }//printf("%d",a[i]);

    return 0;
}
