#include <stdio.h>

int main()
{
    int i, j, k;
    int arr[] = {10, 20, 40, 55, 43, 97, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr[i] = '$';
            // Use single inverted comma for characters
            
        }
        printf(arr[i] == '$' ? "%c " : "%d ", arr[i]);
    }

    return 0;
}
