#include <stdio.h>

int main()
{
    int arr[] = {50, 20, 10, 30, 40};
    int k = 1;
    int i, j;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            // Already one element will be assigned as the largest and will be placed at the last
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int kthlargestelement = arr[n - k];
    printf("%d th largest element is: %d", k, kthlargestelement);
    int kthsmallestelement = arr[k - 1];
    printf("\n %d th smallest elememt is: %d", k, kthsmallestelement);

    return 0;
}