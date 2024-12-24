#include <stdio.h>

int main() {
    int arr[]={1,2,2,3,4,4,4,5,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int i,j;
    for(i=0;i<n;i++){
        int uni=1;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                uni=0;
            }
        }
        if(uni==1){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}