#include <stdio.h>

int main() {
    int i,j;
    char ch = 'a';
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%c ",(ch%2==1)?ch:ch-32);
            ch++;
        }
        printf("\n");
    }
    return 0;
}