#include<stdio.h>
#include<string.h>
#include<math.h>
//babad
char * longestPalindrome(char * s){
    char st[(strlen(s)*2)+1];
    int j=0;
    int n=strlen(s)*2;
    int index[n];
    for(int i=0;i<n;i++){
        index[i]=0;
    }
for(int i=0;i<n;i=i+2){
    st[i]='#';
    st[i+1]=*(s+j);
    j++;
}
st[n]='#';
int ind=0;
int ma=0;
for(int i=0;i<=n;i++){
   for(int j=i+1,k=i-1;k>=0&&j<n;k--,j++){
    if(st[j]==st[k]){
        index[i]++;
    }
    else{
        break;
    }
   }
   if(ma<index[i]){
    ma=index[i];
    ind=i;
   }
}
//char news[n];
for(int i=ind-ma;i<ind+ma;i++){
    if(st[i]!='#'){
        printf("%c",st[i]);
    }
}

/*for(int i=0;i<strlen(new);i++){
    printf("%c",new[i]);
}*/
}
void main(){
char str[30];
gets(str);
//puts(str);
longestPalindrome(str);
}
