#include <stdio.h>

int main()
{
    int arr[] = {2, 45, 12, 36, 7, 5, 44, 21, 25, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, k;
    int count;

    for (i = 0; i < n; i++)
    {
        // Check if arr[i] is prime
        count = 0;
        for (j = 1; j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                count++;
            }
        }

        if (count == 2)
        { // Prime number has exactly 2 divisors
            // Shift elements to remove arr[i]
            for (k = i; k < n; k++)
            {
                arr[k] = arr[k + 1];
            }
            n--; // Reduce array size
            i--; // Stay at the same index for the next iteration
        }
    }

    printf("The remaining numbers are: ");
    for (i = 0; i < n; i++)
        if (arr[i] % 2 != 0)
        {
            printf("* ");
        }
        else
        {
            printf("%d ", arr[i]);
        }
    return 0;
}
