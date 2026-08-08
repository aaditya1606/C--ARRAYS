/*
PROGRAM: COPY ONE ARRAY TO ANOTHER MANUALLY
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
                printf("YOU HAVE ALREADY ENTERED THIS NUMBER! RE-ENTER: ");
                scanf("%d", &numbers[i]);
            }
        }
    }
    int numbers2[size];
    for (int i = 0; i < size; i++)
    {
        numbers2[i] = numbers[i];
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers2[i]);
    }
    return 0;
}