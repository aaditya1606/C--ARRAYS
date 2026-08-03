/*
PROGRAM: FIND THE SUM OF ALL ELEMENTS IN AN ARRAY
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int size, sum = 0;
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
    for (int j = 0; j < size; j++)
    {
        sum += numbers[j];
    }
    printf("SUM OF ALL ELEMENTS OF ARRAY: %d", sum);
    return 0;
}