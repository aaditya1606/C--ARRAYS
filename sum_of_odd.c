/*
PROGRAM: FIND THE SUM OF ODD ELEMENTS ONLY
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
        printf("ENTER A VALID SIZE!!");
        scanf("%d", &size);
    }
    int numbers[size];
    for (int i = 0; i < size; i++)
    {
        printf("INSERT THE VALUE: ");
        scanf("%d", &numbers[i]);
        while (numbers[i] < 0)
        {
            printf("ENTER POSITIVE NUMBER!! ");
            scanf("%d", &numbers[i]);
        }
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] % 2 == 1)
        {
            sum += numbers[i];
        }
    }
    printf("SUM OF ALL ODD ELEMENTS: %d", sum);
    return 0;
}