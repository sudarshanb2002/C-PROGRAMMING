#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n,i,j,a;
    scanf("%d", &a);
  	// Complete the code to print the pattern.
  	n=a*2-1;
  	int startr=0;
  	int endr=n-1;
  	int startc=0;
  	int endc=n-1;
  	while(a!=0){
  	int num=a;
  	for(i=0;i<n;i++){
  	    for(j=0;j<n;j++){
  	        if(startr==0||endr==n-1||startc==0||endc==n-1){
  	            printf("%d",i);
  	        }
  	        else{
  	            printf(" ");
  	        }
  	    }
  	    printf("\n");
  	}
  	  startr++;
  	  endr+=-1;
  	  startc++;
  	  endc+=-1;
  	  num--;
  	  a--;
  	}
    return 0;
}
