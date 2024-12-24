#include <stdio.h>

int main() {
    int i,j;
    for(i=1;i<=9;i++){
        int col =1;
        if(i==1 || i==2) col=3;
        else if(i==4 || i==5) col=6;
        else if(i==8 || i==9) col=9;
        for(j=1;j<=col;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}