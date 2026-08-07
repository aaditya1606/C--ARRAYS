/*
PROGRAM: REPLACE ALL EVEN NUMBERS WITH 1 AND ODD NUMBERS WITH 0
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
        printf("ENTER A VALID SIZE!! RE-ENTER: ");
        scanf("%d", &size);
    }
    int numbers[size];
    for (int i = 0; i < size; i++)
    {
        printf("INSERT THE VALUE: ");
        scanf("%d", &numbers[i]);
        for (int j = 0; j < i; j++)
        {
            if (numbers[i] == numbers[j])
            {
                printf("YOU HAVE ALREADY ENTERED THI NUMBER!! RE-ENTER: ");
                scanf("%d", &numbers[i]);
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            numbers[i] = 1;
        }
        else
        {
            numbers[i] = 0;
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}