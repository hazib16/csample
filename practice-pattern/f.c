#include <stdio.h>

int main() {
    int i,j,k;
    int count=1;
    for(i=1;i<=3;i++){
        for(j=1;j<=i;j++){
            printf("%d ",count=i);
            printf("\n");
        }
        for(k=1;k<=i+1;k++){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    return 0;
}