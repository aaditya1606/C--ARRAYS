/*
PROGRAM: COUNT HOW MANY ELEMENTS ARE PERFECT SQUARES
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>

int main()
{
    int size;
    printf("ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d", &size);
    while (size <= 0)
    {
        printf("ENTER A VALID SIZE!! ");
        scanf("%d", &size);
    }
    int numbers[size];
    for (int i = 0; i < size; i++)
    {
        printf("INSERT THE VALUE: ");
        scanf("%d", &numbers[i]);
        while (numbers[i] < 0)
        {
            printf("ENTER A POSITIVE NUMBER: ");
            scanf("%d", &numbers[i]);
        }
    }
    int count = 0;
    printf("PEFRECT SQUARES: ");
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j <= numbers[i]; j++)
        {
            if (j * j == numbers[i])
            {
                printf("%d ", numbers[i]);
                count++;
                break;
            }
        }
    }
    printf("\nCOUNT OF PERFECT SQUARES: %d", count);
    return 0;
}