#include <stdio.h>

int main() {
    int i,j;
    for(i=1;i<=6;i++){
        for(j=1;j<=i-1;j++){
            printf("  ");
        }
        for(j=1;j<=7-i;j++){
            if(i%2==0){
                printf("* ");
            }else{
                printf("$ ");
            }
        }
        printf("\n");
    }
    return 0;
}