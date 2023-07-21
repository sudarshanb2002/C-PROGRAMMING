#include<stdio.h>
void main(){
    int a[20];
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
 int five=0;
 int ten=0;
 int twenty=0;
  for(int i=0;i<5;i++){
        if(a[i]==5){
          five++;

        }
        else if(a[i]==10){
        if(five>0){
         ten++;
            five--;
        }
        else{
                printf("FALSE");
            return 0;
        }
        }
        else if(a[i]==20){
            twenty++;
            if(ten>0&&five>0){
            ten--;
            five--;
            }
            else if(five>2){
                five=five-3;
            }
            else {
                printf("FALSE");
                return 0;
            }


        }
    }
    printf("TRUE");
    printf("%d\n",five);printf("%d\n",ten);
    printf("%d\n",twenty);

}
