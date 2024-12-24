#include <stdio.h>

int main()
{
    int arr[] = {65, 20, 48, 79, 35, 61, 22, 55, 69, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j;
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
    printf("Second smallest element in the array is: %d", arr[1]);
    return 0;
}