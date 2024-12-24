#include <stdio.h>

int main() {
    int i,j,k,l,m;
    for(i=1;i<=3;i++){
        for(j=1;j<=5-i;j++){
            printf("* ");
        }
        printf("\n");
        for(k=1;k<=4-i;k++){
            printf("* ");
        }
        
        printf("\n");
        if(i==3) break;
        for(l=1;l<=3;l++){
            printf("* ");
            if(i==3) break;
            printf("\n");
            
        }
    }    
    return 0;
}