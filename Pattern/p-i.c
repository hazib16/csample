#include <stdio.h>

int main() {
    int i,j,k;
    for(i=1;i<=5;i++){
        for(j=1;j<=12-2*i;j++){
            printf("* ");
        }
        
        printf("\n");
        for(k=1;k<=i;k++){
            printf("* \n");
        if(i==6)break;
        }
    }    
    return 0;
}