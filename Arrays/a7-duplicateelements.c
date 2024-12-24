#include <stdio.h>

int main() {
    int i,j;
    int arr[]={1,1,2,3,4,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                break;//If the count increases, suddenly the 'j' loop will get break and 'i' loop will be incremented 
            }
        }
    }
    printf("Number of duplicate elements are: %d",count);

    return 0;
}