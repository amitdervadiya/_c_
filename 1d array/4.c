#include <stdio.h>
void main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("enter elements of array ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("all odd numbers %d\n", arr[i]);
        }
    }
}