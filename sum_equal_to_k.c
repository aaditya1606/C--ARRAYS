/*
PROGRAM: COUNT HOW MANY PAIRS OF ELEMENTS HAVE A SUM EQUAL TO A GIVEN NUMBER K
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
    int k;
    printf("ENTER THE K: ");
    scanf("%d", &k);
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                count++;
            }
        }
    }
    printf("COUNT OF PAIRS OF ELEMENTS: %d", count);
    return 0;
}