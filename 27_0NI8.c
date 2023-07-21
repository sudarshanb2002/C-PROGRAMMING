#include <stdio.h>
#include<string.h>
void  main() {
    char ch[4][4]={"cat","bt","hat","tree"};
    char c[50];
   char chh[5]={'a','t','a','c','h'};
   int res=0;
  for(int i=0;i<4;i++){
        //c[]=ch[i];
        strcpy(c,ch[i]);
   int count=0;
   int length=strlen(ch[i]);
     for(int j=0;j<length;j++){
        for(int k=0;k<sizeof(chh)/sizeof(chh[0]);k++){
            if(c[j]==chh[k]){
                count++;
                if(count==length){
                    res+=length;
                }
            }
        }
     }
   }
   printf("%d",res);
}
