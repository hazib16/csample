#include <stdio.h>

int main()
{
    int n, m, count;
    printf("Enter the value: ");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("It is not a prime number");
    }
    else
    {
        for (m = 0; m < n; m++)
        {
            if (n % m == 0)
            {
                count++;
            }
        }
        if (count > 2)
        {
            printf("It is not a prime number");
        }
        else
        {
            printf("It is a prime number");
        }
    }

    return 0;
}