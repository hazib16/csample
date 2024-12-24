#include <stdio.h>

int main() {
    int i,n;
    int arr1[]={10,20,30,40,50};
    int arr2[100];
    n = sizeof(arr1)/sizeof(arr1[0]);
    for(i=0;i<n;i++){
        arr2[i]=arr1[i];
    }
    printf("Elements in Array 1 are: ");
    for(i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    printf("\nElements in Array 2 are: ");
    for(i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
    

    return 0;
}