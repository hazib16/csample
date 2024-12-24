#include <stdio.h>

int main()
{
    int i;
    int even[100], odd[100];
    int even_count = 0, odd_count = 0;
    int n = 10;
    printf("Enter %d numbers: \n", n);
    for (i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            even[even_count] = num;
            even_count++;
            // even_count is typed to specify where to place the elements satisfying the if condidtion
            //  We can also type even[even_count++]=num
        }
        else
        {
            odd[odd_count++] = num;
        }
    }
    printf("Even numbers in the array are: ");
    for (i = 0; i < even_count; i++)
    {
        printf("%d ", even[i]);
    }
    printf("Odd numbers in the array are: ");
    for (i = 0; i < odd_count; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}