/*
PROGRAM: FIND THE MINIMUM ELEMENT IN THE ARRAY
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
        printf("RE-ENTER THE SIZE OF THE ARRAY: ");
        scanf("%d", &size);
    }
    int i = 1, numbers[size];
    for (i = 1; i <= size; i++)
    {
        printf("INSERT THE VALUE: ");
        scanf("%d", &numbers[i - 1]);
    }
    int min = numbers[0];
    for (int j = 1; j < size; j++)
    {
        if (numbers[j] < min)
        {
            min = numbers[j];
        }
    }
    printf("MINIMUM NUMBER: %d", min);
    return 0;
}