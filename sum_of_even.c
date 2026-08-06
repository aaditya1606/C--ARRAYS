/*
PROGRAM: FIND THE SUM OF EVEN ELEMENTS ONLY
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>
#include <conio.h>
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
        while (numbers[i - 1] < 0)
        {
            printf("ENTER A POSITIVE NUMBER!! ");
            scanf("%d", &numbers[i - 1]);
        }
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            sum += numbers[i];
        }
    }
    printf("SUM OF ALL EVEN NUMBERS: %d", sum);
    return 0;
}