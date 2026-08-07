/*
PROGRAM: CREATE A NEW ARRAY CONTAINING SQUARES OF ALL NUMBERS
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
                printf("YOU HAVE ALREADY ENTERED THIS NUMBER! RE-ENTER: ");
                scanf("%d", &numbers[i]);
            }
        }
    }
    printf("\nNEW ARRAY AFTER SQUARRING THE VALUES: ");
    int squares[size];
    for (int i = 0; i < size; i++)
    {
        squares[i] = numbers[i] * numbers[i];
        printf("%d ",squares[i]);
    }
    return 0;
}