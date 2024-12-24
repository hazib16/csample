#include <stdio.h>

int main()
{
    int arr[] = {10, 2, 5, 3, 11, 56, 45, 12, 65, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;
    printf("Alternate elements are: ");
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\nOther alternate elements are: ");
    for (i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        // != Not equal to
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}