#include <stdio.h>

int main() {
    int arr[]={5,4,9,8,1,3,2};
    int n= sizeof(arr)/sizeof(arr[0]);
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
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}