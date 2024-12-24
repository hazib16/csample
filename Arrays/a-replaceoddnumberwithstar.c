#include <stdio.h>

int main()
{
    int arr[] = {10, 14, 55, 85, 43};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            for (j = i; j < n; j++)
            {
                arr[j] = arr[j + 1];
            }
            i--;
            n--;
        }
        if (arr[i] % 2 != 0)
        {
            arr[i] = '*';
        }
    }
    printf("The remaining numbers are: ");
    for (i = 0; i < n; i++)
    {
        printf("%c ", arr[i]);
    }
    return 0;
}