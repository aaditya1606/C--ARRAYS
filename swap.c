/*
PROGRAM: SWAP THE FIRST AND THE LAST ELEMENT OF THE ARRAY
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
                printf("YOU HAVE ALREADY ENTERED THIS NUMBER!! RE-ENTER: ");
                scanf("%d", &numbers[i]);
            }
        }
    }
    int temp;
    temp = numbers[0];
    numbers[0] = numbers[size - 1];
    numbers[size - 1] = temp;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}