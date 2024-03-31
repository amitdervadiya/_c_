#include <stdio.h>
void main()
{
    int arr[5], sum = 0, avr;

    for (int i = 0; i < 5; i++)
    {
        printf("enter elements of array ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {

        sum += arr[i];
    }
    avr = sum / 5;
    printf("the avr of array%d\n", avr);
}