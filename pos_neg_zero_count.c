/*
PROGRAM: COUNT HOW MANY ELEMENTS ARE POSITIVE,NEGATIVE OR ZERO
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
    for (int i = 1; i <= size; i++)
    {
        printf("INSERT THE VALUE: ");
        scanf("%d", &numbers[i - 1]);
    }
    int zero_count = 0, pos_count = 0, neg_count = 0;
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] < 0)
        {
            neg_count++;
        }
        else if (numbers[i] > 0)
        {
            pos_count++;
        }
        else
        {
            zero_count++;
        }
    }
    printf("POSITIVE COUNT: %d\n", pos_count);
    printf("NEGATIVE COUNT: %d\n", neg_count);
    printf("ZERO COUNT: %d\n", zero_count);
    return 0;
}