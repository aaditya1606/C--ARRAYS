/*
PROGRAM: COUNT HOW MANY NUMBERS ARE DIVISIBLE BY 3&5 BOTH
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
        printf("ENTER A VALID SIZE!! ");
        scanf("%d", &size);
    }
    int numbers[size];
    for (int i = 0; i < size; i++)
    {
        printf("INSERT THE VALUE: ");
        scanf("%d", &numbers[i]);
        while (numbers[i] < 0)
        {
            printf("ENTER A POSITIVE NUMBER!! ");
            scanf("%d", &numbers[i]);
        }
    }
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] % 3 == 0 && numbers[i] % 5 == 0)
        {
            count++;
        }
    }
    printf("COUNT OF NUMBERS DIVISIBLE BY BOTH 3&5: %d", count);
    return 0;
}