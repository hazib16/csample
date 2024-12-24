#include <stdio.h>

int main() {
    int arr[]={2,5,25,66,65,78,77,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,j;
    for(i=0;i<n;i++){
        if(arr[i]%2==0 && arr[i]<50){
            for(j=i;j<n;j++){
                arr[j]=arr[j+1];
            }
            i--;
            n--;
        }
        if(arr[i]%2!=0 && arr[i]>50){
            for(j=i;j<n;j++){
                arr[j]=arr[j+1];
            }
            i--;
            n--;
        }
    }
    printf("The remaining numbers are: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}