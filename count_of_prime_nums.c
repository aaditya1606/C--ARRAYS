/*
PROGRAM: FIND THE COUNT OF PRIME NUMBERS IN THE ARRAY
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
    printf("PRIME NUMBERS IN THE ARRAY: ");
    for (int i = 0; i < size; i++)
    {
        int primeflag = 1;
        if (numbers[i] == 1)
        {
            continue;
        }
        else if (numbers[i] == 2)
        {
            printf("%d ", 2);
        }
        else
        {

            for (int j = 2; j < numbers[i]; j++)
            {
                if (numbers[i] % j == 0)
                {
                    primeflag = 0;
                    break;
                }
            }
            if (primeflag == 1)
            {
                printf("%d ", numbers[i]);
            }
        }
    }
    return 0;
}