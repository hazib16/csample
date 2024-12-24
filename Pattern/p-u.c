#include <stdio.h>

int main() {
    int i,j;
    for(i=1;i<=7;i++){
        for(j=1;j<=7;j++){
            if(i==7 || j==7 || j==8-i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}