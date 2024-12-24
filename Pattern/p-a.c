#include <stdio.h>

int main()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i * 4; j++)
        {
            printf("* ");
        }
        printf("\n");
        if (i == 4)
            break;
        for (k = 1; k <= 2; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}