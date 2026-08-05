/*
PROGRAM: CHECK IF ALL THE ELEMENTS IN AN ARRAY ARE UNIQUE
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
    }
    int uniqueflag = 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                if (numbers[i] == numbers[j])
                {
                    uniqueflag = 0;
                    break;
                }
            }
        }
        if (uniqueflag == 0)
        {
            break;
        }
    }
    if (uniqueflag == 0)
    {
        printf("ALL ELEMENTS ARE NOT UNIQUE!");
    }
    else
    {
        printf("ALL ELEMENTS ARE UNIQUE!");
    }
    return 0;
}