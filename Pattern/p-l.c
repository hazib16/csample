#include <stdio.h>

int main() {
    int rows = 18;
    int i,j;
    for(i=1;i<=rows;i++){
        int col = 1;
        if(i==1 || i==9) col=5;
        if(i==4 || i==18) col=10;
        for(j=1;j<=col;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}