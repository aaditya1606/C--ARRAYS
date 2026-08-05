/*
PROGRAM: FIND THE LAST OCCURENCE OF A GIVEN NUMBER
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
        printf("ENTER A VALID SIZE: ");
        scanf("%d", &size);
    }
    int numbers[size];
    for (int i = 0; i < size; i++)
    {
        printf("INSERT THE VALUE: ");
        scanf("%d", &numbers[i]);
    }
    int n;
    printf("ENTER THE NUMBER TO CHECK FOR LAST APPEARANCE: ");
    scanf("%d", &n);
    for (int j = size - 1; j >= 0; j--)
    {
        if (numbers[j] == n)
        {
            printf("INDEX OF LAST APPEARANCE: %d", j);
            break;
        }
    }
    return 0;
}