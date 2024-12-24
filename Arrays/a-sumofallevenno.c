#include <stdio.h>

int main() {
    int arr[]={1,2,12,15,16,20};
    int i,j;
    int sum=0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            sum += arr[i];
        }
    }
    printf("Sum of all elements is: %d",sum);
    return 0;
}