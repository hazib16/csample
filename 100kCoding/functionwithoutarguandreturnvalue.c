#include <stdio.h>
void sum();
int main() {
    sum();
    return 0;
}
void sum(){
    int num1,num2,result;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    result=num1+num2;
    printf("The sum is: %d",result);
}