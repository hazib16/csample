#include <stdio.h>

int main() {
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=4*i;j++){
            printf("* ");
        }
        printf("\n");
        if(i==4)break;
        for(int k=1;k<=2;k++){
            printf("* ");
        }
        printf("\n");

    }
    return 0;
}