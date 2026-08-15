/*
PROGRAM: FIND THE SECOND SMALLEST ELEMENT IN THE ARRAY
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
        printf("INSERT THE ELEMENT: ");
        scanf("%d", &size);
    }
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("INSERT THE VALUE: ");
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    int minindex = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minindex = i;
        }
    }
    int secondmin = arr[1];
    if (min == secondmin)
    {
        secondmin = arr[0];
    }
    for (int i = 0; i < size; i++)
    {
        if (i == minindex)
        {
            continue;
        }
        else
        {
            if (arr[i] < secondmin)
            {
                secondmin = arr[i];
            }
        }
    }
    printf("SECOND SMALLEST NUMBER IN THE ARRAY: %d", secondmin);
    return 0;
}