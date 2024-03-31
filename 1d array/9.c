#include <stdio.h>

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("enter number");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {   printf("square of number :");
        arr[i] = arr[i] * arr[i];
        printf(" %d\n", arr[i]);
    }
}