#include <stdio.h>

int main() {
    int rows=13;
    int i,j;
    for(i=1;i<=rows;i++){
        int col=1;
        if(i==1 || i==7 || i==13) col=5;
        else if(i==4 || i==10) col=3;
        for(j=1;j<=col;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}