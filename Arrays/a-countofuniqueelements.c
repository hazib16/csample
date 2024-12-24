#include <stdio.h>

int main()
{
    int i, j;
    int arr[] = {1, 1, 2, 3, 4, 5, 5, 5, 6, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    for (i = 0; i < n; i++)
    {
        int uni = 1;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                uni = 0;
            }
        }
        if (uni == 1)
        {
            count++;
        }
    }
    printf("The number of unique elements are: %d", count);
    return 0;
}