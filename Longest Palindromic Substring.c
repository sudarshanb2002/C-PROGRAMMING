#include<stdio.h>
#include<stdlib.h>
void main(){
char ch[50];
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%c",&ch[i]);
}
char ch1[50];
int n2=n*2;
int j=0;
int index[n2];
 for(int i=0;i<=n2;i++){
        index[i]=0;
    }
for(int i=0;i<n2;i=i+2){
    ch1[i]='#';
    ch1[i+1]=ch[j];
    j++;
}
ch1[n2]='#';
for(int i=0;i<n2+1;i++){
    //printf("%c",ch1[i]);
}
//printf("\n");
int ma=0;
int ind=0;
for(int i=0;i<=n2;i++){
    for(int j=i+1,k=i-1;k<=n2,j<=n2;j++,k--){
    if(ch1[j]==ch1[k]){
        index[i]++;
    }
    else{
        break;
    }
    if(ma<index[i]){
        ma=index[i];
        ind=i;
    }
    }
}
for(int i=ind-ma;i<ind+ma;i++){
    if(ch1[i]!='#'){
        printf("%c",ch1[i]);
    }
}
}
