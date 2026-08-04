/*
PROGRAM: FIND THE INDEX OF THE MAXIMUM ELEMENT
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
        printf("RE-ENTER THE SIZE: ");
        scanf("%d", &size);
    }
    int numbers[size];
    for (int i = 1; i <= size; i++)
    {
        printf("INSERT THE VALUE: ");
        scanf("%d", &numbers[i - 1]);
    }
    int max = numbers[0];
    int max_index = 0;
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
            max_index = i;
        }
    }
    printf("MAX INDEX: %d", max_index);
    return 0;
}