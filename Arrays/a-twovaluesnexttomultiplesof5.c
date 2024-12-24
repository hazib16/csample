#include <stdio.h>

int main() {
    int arr[]={1,5,2,4,15,8,9,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i,j;
    for(i=0;i<n;i++){
        if(arr[i]%5==0){
            for(j=i+1;j<n;j++){
                arr[j]=arr[j+2];
                n--;
            }
        }
    }
    printf("Remaining elements are: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}