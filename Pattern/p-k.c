#include <stdio.h>

int main()
{
    int i, j, k, l;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 2; j++)
        {
            for (k = 1; k <= 3 * i; k++)
            {
                printf("* ");
            }
            printf("\n");
        }

        if (i == 3)
            break;
        for (l = 1; l <= i; l++)
        {
            printf("* \n");
        }
    }
    return 0;
}