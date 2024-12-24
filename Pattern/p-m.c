#include <stdio.h>

int main() {
    int i,j,k;
    for(i=1;i<=4;i++){
        for(j=1;j<=2*i;j++){
            printf("* ");
        }
        printf("\n");
        for(k=1;k<=i*2;k++){
            printf("* _ ");
        }
        printf("\n");
    }    
    return 0;
}