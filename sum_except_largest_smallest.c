/*
PROGRAM: FIND THE SUM OF ALL ELEMENTS EXCEPT THE LARGEST AND THE SMALLEST
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
        printf("ENTER A VALID SIZE!! RE-ENTER: ");
        scanf("%d", &size);
    }
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("INSERT THE VALUE: ");
        scanf("%d", &arr[i]);
    }
    int max = arr[0], maxindex = 0;
    int min = arr[size - 1], minindex = size - 1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxindex = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            minindex = i;
        }
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (i == maxindex || i == minindex)
        {
            continue;
        }
        sum += arr[i];
    }
    printf("SUM OF THE ARRAY: %d", sum);
    return 0;
}