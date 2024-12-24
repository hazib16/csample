#include <stdio.h>

int main() {
    int arr[]={20,19,17,12,21,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("The elements in descending order is: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}