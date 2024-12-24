#include <stdio.h>

int main()
{
    int i, j;
    int arr[] = {1, 2, 2, 3, 4, 5, 21, 55, 6, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Unique elements are: ");
    for (i = 0; i < n; i++)
    {
        int uni = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                uni = 0;
            }
        }
        if (uni == 1)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}