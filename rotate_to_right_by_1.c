/*
PROGRAM: ROTATE AN ARRAY TO RIGHT BY ONE POSITION
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>
int main()
{
    int size;
    printf("ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d", &size);
    while (size <= 1)
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
                printf("YOU HAVE ALREADY ENTERED THIS NUMBER!! RE-ENTER: ");
                scanf("%d", &numbers[i]);
            }
        }
    }
    printf("ARRAY BEFORE SHIFT: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    int temp = numbers[size - 1];
    for (int i = size - 1; i > 0; i--)
    {
        numbers[i] = numbers[i - 1];
    }
    numbers[0] = temp;
    printf("\nARRAY AFTER SHIFT: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}