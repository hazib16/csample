#include <stdio.h>

int main() {
    int stars[]={3,3,1,6,6,1,1,9,9};
    int i,j;
    for(i=0;i<9;i++){
        for(j=1;j<=stars[i];j++){
            printf("* ");
            
        }
        printf("\n");
    }                                                     
    return 0;
}