#include <stdio.h>

int main() {
    int i,n;
    int arr[100];
    int sum=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter %d elements: \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum += arr[i];
    }
    printf("Sum of all the elements is: %d",sum);
    return 0;
}