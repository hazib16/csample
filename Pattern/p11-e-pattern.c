#include <stdio.h>

int main()
{
    int i, j;
    int n = 10;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || i == n / 2 || j == 1)
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}