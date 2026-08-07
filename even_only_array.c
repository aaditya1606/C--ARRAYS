/*
PROGRAM: CREATE A NEW ARRAY CONTAINING ONLY EVEN ELEMENTS
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
                printf("YOU HAVE ALREADY ENTERED THIS NUMBER!! RE-ENTER: ");
                scanf("%d", &number[i]);
            }
        }
    }
    int evenonly[size];
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (number[i] % 2 == 0)
        {
            evenonly[index] = number[i];
            index++;
        }
    }
    printf("\nONLY EVEN ELEMENTS: ");
    for (int i = 0; i < index; i++)
    {
        printf("%d ", evenonly[i]);
    }
    return 0;
}