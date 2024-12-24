#include <stdio.h>

int main() {
    int i,j,k,l;
    for(k=1;k<=2;k++){
        for(l=1;l<=2;l++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=3;i++){
        for(j=1;j<=5*i;j++){
            printf("* ");
        
        }
        printf("\n");
        if(i==3)break;
        for(k=1;k<=2;k++){
        for(l=1;l<=2;l++){
            printf("* ");
        
        }
        
        printf("\n");
    }
    }
    return 0;
}