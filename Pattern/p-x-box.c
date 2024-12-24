#include <stdio.h>

int main()
{
    int i, j, k;
    int n = 15;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j == i || j == n + 1 - i || i == 1 || j == 1 || j == n || i == n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}