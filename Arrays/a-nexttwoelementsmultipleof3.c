#include <stdio.h>

int main() {
    int arr[]={3,1,2,8,9,4,5,6,12,5,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    int i,j,k;
    for(i=0;i<n;i++){
        if(arr[i]%3==0){
            for(j=i+1;j<n;j++){
                arr[j]=arr[j+2];
            }
            n-=2;
        }
    }
    printf("The numbers are: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}