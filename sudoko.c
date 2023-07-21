// Online C compiler to run C program online
#include <stdio.h>
/*void rowcheck(){
    int c[9]={0,0,0,0,0,0,0,0,0};
    int i,j,var;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            var=a[i][j];
        }
    }
    for(i=0;i<9;i++){
        c[var]+=1;
    }
}*/
int main() {
    int n,i,j,a[9][9]={2,1,9,2,4,3,6,7,8,2,1,9,5,4,3,6,7,8,2,1,9,5,4,3,6,7,8,2,1,9,5,4,3,6,7,8,2,1,9,5,4,3,6,7,8,2,1,9,5,4,3,6,7,8,2,1,9,5,4,3,6,7,8,2,1,9,5,4,3,6,7,8,2,1,9,5,4,3,6,7,8,2,1,9,5,4,3,6,7,8},choice;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    scanf("%d",&choice);
    switch(choice){
        case 1:{
             int c[9]={0,0,0,0,0,0,0,0,0};
    int i,j,var;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            c[a[i][j]-1]++;
        }
    }
      for(i=0;i<9;i++){
          printf("%d",c[i]);
          if(c[i]!=1){
              printf("\nDUPLICATED OCCURED!\n");
          }

      }
        }

        break;
    }
    return 0;

}
