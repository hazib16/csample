#include <stdio.h>

int main() {
    int arr[]= {1,2,-5,6,-6,-10};
    int n= sizeof(arr)/sizeof(arr[0]);
    int i;
    for(i=0;i<n;i++){
        if(arr[i]<0){
            arr[i]=0;
        }
    }
    printf("The elements are: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}