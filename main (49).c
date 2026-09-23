
#include <stdio.h>

int main() {
    int i,j,m,sum;
    for (i=0;i<5;i++){
          sum=6;
        for(m=5;m>i;m--){
              printf(" ");
        }  
        for (j=0;j<=i;j++){
              sum-=1;
              printf("%d",sum);
    }
    printf("\n");
    }
    return 0;
}