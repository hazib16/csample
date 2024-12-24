#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 14, 20, 21};
    int i;
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            sum += arr[i];
        }
    }
    printf("Sum of odd numbers are: %d", sum);
    return 0;
}