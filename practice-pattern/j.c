#include <stdio.h>

int main() {
    int i,j,k;
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            printf("  ");
        }
       // printf("\n");
        for(k=1;k<=6-i;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}