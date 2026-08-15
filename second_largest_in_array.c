/*
PROGRAM: FIND THE SECOND LARGEST ELEMENT IN THE ARRAY
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int size;
    printf("ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d", &size);
    while (size <= 0)
    {
        printf("ENTER A VALID SIZE!! RE-ENTER: ");
        scanf("%d", &size);
    }
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("INSERT THE VALUE: ");
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int maxindex = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxindex = i;
        }
    }
    int secondmax = arr[1];
    if (secondmax == max)
    {
        secondmax = arr[0];
    }
    for (int i = 0; i < size; i++)
    {
        if (i == maxindex)
        {
            continue;
        }
        else
        {
            if (arr[i] > secondmax)
            {
                secondmax = arr[i];
            }
        }
    }
    printf("SECOND LARGEST: %d", secondmax);
    return 0;
}