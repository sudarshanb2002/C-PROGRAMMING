#include<stdio.h>
void main(){
int a[]={1,0,0,0,0};
int n=sizeof(a)/sizeof(a[0]);
int count=0;
/*for(int i=0;i<n;i++){
        if(a[i]==0){
            a[i]++;
        }
        else if(a[i]==1){
            a[i]--;
        }
    count ++;

}*/
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        for(int k=j+1;k<n;k++){
            if(a[j]==0){
            a[i]++;
        }
        else if(a[j]==1){
            a[i]--;
        }
        }
    }
}


printf("%d",count);
for(int i=0;i<n;i++){
    printf("%d",a[i]);
}
}
