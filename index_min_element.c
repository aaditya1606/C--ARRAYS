/*
PROGRAM: FIND THE INDEX OF THE MINIMUM ELEMENT
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
        printf("RE-ENTER THE SIZE!! ");
        scanf("%d", &size);
    }
    int numbers[size];
    for (int i = 1; i <= size; i++)
    {
        printf("INSERT THE VALUE: ");
        scanf("%d", &numbers[i - 1]);
    }
    int min = numbers[0];
    int min_index = 0;
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
            min_index = i;
        }
    }
    printf("MINIMUM INDEX: %d", min_index);
    return 0;
}