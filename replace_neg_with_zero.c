/*
PROGRAM: REPLACE EVERY NEGATIVE NUMBER WITH 0
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
    int number[size];
    for (int i = 0; i < size; i++)
    {
        printf("INSERT THE VALUE: ");
        scanf("%d", &number[i]);
        for (int j = 0; j < i; j++)
        {
            if (number[i] == number[j])
            {
                printf("YOU HAVE ALREADY ENTERRED THIS NUMBER!! RE-ENTER: ");
                scanf("%d", number[i]);
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (number[i] < 0)
        {
            number[i] = 0;
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", number[i]);
    }
    return 0;
}