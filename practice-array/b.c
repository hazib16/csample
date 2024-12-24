#include <stdio.h>

int main() {
int arr[]={1,2,3,4,5,6};
int i;
int freq[100]={0};
int n= sizeof(arr)/sizeof(arr[0]);
for(i=0;i<n;i++){
    freq[arr[i]]++;
}
printf("The unique elements are: ");
for(i=0;i<n;i++){
    if(freq[arr[i]]==1){
        printf("%d ",arr[i]);
    }
}
    return 0;
}