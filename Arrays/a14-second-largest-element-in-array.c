#include <stdio.h>

int main()
{
    int arr[] = {50, 40, 90, 80, 20, 10, 55, 75, 48, 65, 100};
    int i, j;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Second largest element in the array is: %d", arr[n - 2]);
    return 0;
}