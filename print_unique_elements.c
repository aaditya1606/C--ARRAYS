/*
PROGRAM: PRINT ALL THE UNIQUE ELEMENTS
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
        printf("ENTER THE VALID SIZE!! RE-ENTER: ");
        scanf("%d", &size);
    }
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("INSERT THE VALUE: ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        int unique_element = true;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                unique_element = false;
                break;
            }
        }
        for (int k = i - 1; k >= 0; k--)
        {
            if (arr[i] == arr[k])
            {
                unique_element = false;
                break;
            }
        }
        if (unique_element == true)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}