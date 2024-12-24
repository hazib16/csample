#include <stdio.h>

int main()
{
    int i, s1, s2, s3;
    int arr1[100], arr2[100], arr3[100];
    printf("Enter the size of Array1: ");
    scanf("%d", &s1);
    printf("Enter the values of Array1: \n");
    for (i = 0; i < s1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of Array2: ");
    scanf("%d", &s2);
    printf("Enter the values of Array2: \n");
    for (i = 0; i < s2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    s3 = s1 + s2;
    for (i = 0; i < s1; i++)
    {
        arr3[i] = arr1[i];
    }
    for (i = 0; i < s2; i++)
    {
        arr3[i + s1] = arr2[i];
    }
    printf("The values of both the array are: ");
    for (i = 0; i < s3; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}