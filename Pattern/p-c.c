#include <stdio.h>

int main() {
    int i,j,k,l;
    for(k=1;k<=2;k++){
        printf("* ");
    }
    printf("\n");
    for(i=1;i<=3;i++){
        for(j=1;j<=i*5;j++){
            printf("* ");
        }
        printf("\n");
    for(k=1;k<=i+1;k++){
        for(l=1;l<=2;l++){
            printf("* ");
        }
        printf("\n");
    }        
    }   
    return 0;
}