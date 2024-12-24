#include <stdio.h>

int main() {
    int i;
    int arr[]={5,10,15,20,25};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("The index of element 15 is: ");
    for(i=0;i<n;i++){
        if(arr[i]==15){
            printf("%d ",i);
        }
    }
    return 0;
}