#include<stdio.h>
#include<string.h>
int main(){
    int T;
    int i;
    char str[50],str2[50],temp,l;
    scanf("%d",&T);
    while(T--){
        scanf("%s",str);
        l=strlen(str);
        for(i=0;i<l/2;i++){
                if(str[i]==str[l-1-i]){
                    printf("yes");
                }else{
                printf("no");}/*        if(str==str2){
            printf("yes");
        }
        else{
            printf("no");
        }
        printf("%s",str);
        printf("\n%s",str2);
printf("\n");
    }*/}}
    return 0;
}
