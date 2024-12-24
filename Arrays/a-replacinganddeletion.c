#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 33, 18, 21, 50};
    int i, j, k;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 3 == 0)
        {
            arr[i] = 9;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            // number is prime, then shift other
            // elements to the left
            for (j = i; j < n; j++)
            {
                arr[j] = arr[j + 1];
            }
            // decrease loop counter by 1,
            // to check shifted element
            i--;
            // decrease the length
            n--;
        }
    }
    printf("Elements are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}