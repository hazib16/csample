#include <stdio.h>

int main() {
    int i,j,k;
    for(i=1;i<=7;i++){
        for(j=1;j<=1+2*(7-i);j++){
            printf("* ");
                    
        }
        printf("\n");
        if(i==7)break;
        for(k=1;k<=i;k++){
            printf("* ");
            
        }
        
        printf("\n");

    }
    return 0;
}