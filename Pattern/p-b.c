#include <stdio.h>

int main() {
    int i,j;
    for(i=1;i<=2;i++){
        for(j=1;j<=3;j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("*\n");
    for(i=1;i<=2;i++){
        for(j=1;j<=6;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=2;i++){
        printf("* ");
        printf("\n");
    }
    for(i=1;i<=2;i++){
        for(j=1;j<=9;j++){
            printf("* ");
        }
        printf("\n");
    }    
    return 0;
}