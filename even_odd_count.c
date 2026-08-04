/*
PROGRAM: COUNT HOW MANY ELEMENTS ARE EVEN OR ODD
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
    int number[size];
    for (int i = 1; i <= size; i++)
    {
        printf("INSERT THE VALUE: ");
        scanf("%d", &number[i - 1]);
    }
    int even_count = 0, odd_count = 0;
    for (int i = 0; i < size; i++)
    {
        if (number[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("EVEN COUNT: %d\n", even_count);
    printf("ODD COUNT: %d\n", odd_count);
    return 0;
}