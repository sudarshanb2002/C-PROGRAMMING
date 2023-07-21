#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n,a[50],b,i,j,k,l,ty;
    scanf("%d",&n);
    for(b=0;b<n;b++){
        scanf("%d",&a[b]);
    }
    for(k=0;k<n;k++){
            for(l=1;l<n+1;l++){
        if(a[k]>a[l]){
            //printf("%d",a[k]);
            ty=a[k];
        }
    }}
    //printf("%d",ty);
       for(i=0;i<n;i++){
                int successor=-1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[i] && (a[j] - a[i] < ty))
            {
                successor = a[j];
                ty = a[j] - a[i];
            }
        }
        a[i] = successor;
        for(i=0;i<n;i++){
            printf("%d\t",a[i]);
        }
    return 0;}}
