#include <stdio.h>

int main() {
    int arr[]={2,4,6,8,11,12,14};    //4,4,5,5,6,9,10,12
    int n = sizeof(arr)/sizeof(arr[0]);
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        int count = 0;
        for(int k=1;k<=arr[i];k++){
            if(arr[i]%2==0){
                count++;
            }
        }
        if (count==2){
            for(int l=i+1;l<n;l++){
                arr[l]=arr[l+2];
            }
            n--;
        }
    }
    printf("The remaining elements are: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}