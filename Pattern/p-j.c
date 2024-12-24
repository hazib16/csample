#include <stdio.h>

int main() {
    int i,j,k;
    for(i=1;i<=4;i++){
        for(j=1;j<=i*5;j++){
            printf("* ");
        
        }
        if(i==4)break;
        printf("\n");
        for(k=1;k<=i;k++){
            printf("* \n");
            
        }
    }    
    return 0;
}