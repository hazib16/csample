#include <stdio.h>

int main()
{
    int arr[] = {1, 1, 2, 3, 4, 5, 5, 6};
    // Unique elements will be 2,3,4,6
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq[100] = {0};
    int i;
    for (i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    printf("Unique elements are: ");
    for (i = 0; i < n; i++)
    {
        if (freq[arr[i]] == 1)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}