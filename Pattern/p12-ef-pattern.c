#include <stdio.h>

int main()
{
    int i, j, k;
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
        if (i == n)
            break;
        for (k = 1; k <= i; k++)
        {
            printf("*\n");
        }
    }
    return 0;
}