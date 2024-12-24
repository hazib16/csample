#include <stdio.h>
int sum();
int main() {
    int k;
    k=sum();
    printf("The sum is: %d",k);
    return 0;
}
int sum(){
    int a,b,result;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);
    result=a+b;
    return result;
}
    