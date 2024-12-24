#include <stdio.h>

int main()
{
    int i;
    int arr[] = {1, 2, 3, 5, 6, 14, 25, 65, 44, 78, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int oddcount = 0;
    int evencount = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    printf("The count of odd numbers are: %d", oddcount);
    printf("\nThe count of even numbers are: %d", evencount);
    return 0;
}