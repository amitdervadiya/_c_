#include <stdio.h>

int main()
{

    int arr[5];

    int product = 1;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter numbers: ");
        scanf("%d",&arr[i]);

        if (arr[i] % 2 == 0)
        {
            product *= arr[i];
        }
    }

    printf("Product of even numbers: %d\n", product);
}