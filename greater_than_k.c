/*
PROGRAM: TAKE N ELEMENTS AND PRINT ONLY THOSE GREATER THAN A GIVEN VALUE K
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>

int main()
{
    int size, k;
    printf("ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d", &size);
    while (size <= 0)
    {
        printf("RE-ENTER THE SIZE: ");
        scanf("%d", &size);
    }
    int numbers[size];
    printf("ENTER THE VALUE(K): ");
    scanf("%d", &k);
    for (int i = 1; i <= size; i++)
    {
        printf("INSERT THE VALUE: ");
        scanf("%d", &numbers[i - 1]);
    }
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] > k)
        {
            printf("%d ", numbers[i]);
        }
    }
    return 0;
}