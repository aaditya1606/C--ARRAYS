/*
PROGRAM: REVERSE AN ARRAY(WITHOUT USING BUILT-IN FUNCTIONS)
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
    }
    printf("ARRAY BEFORE REVERSING: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    int number2[size];
    for (int i = 0; i < size; i++)
    {
        number2[i] = numbers[size - 1 - i];
    }
    printf("\nARRAY AFTER REVERSE: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", number2[i]);
    }
    return 0;
}