/*
PROGRAM: FIND THE ELEMENT-WISE PRODUCT OF TWO ARRAYS
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>

int main()
{
    int size1;
    printf("ENTER THE SIZE OF THE FIRST ARRAY: ");
    scanf("%d", &size1);
    while (size1 <= 0)
    {
        printf("ENTER A VALID SIZE!! RE-ENTER: ");
        scanf("%d", &size1);
    }
    int arr1[size1];
    for (int i = 0; i < size1; i++)
    {
        printf("INSERT THE VALUE: ");
        scanf("%d", &arr1[i]);
    }
    int size2;
    printf("ENTER THE SIZE OF THE SECOND ARRAY: ");
    scanf("%d", &size2);
    while (size2 <= 0)
    {
        printf("ENTER A VALID SIZE!! RE-ENTER: ");
        scanf("%d", &size2);
    }
    int arr2[size2];
    for (int i = 0; i < size2; i++)
    {
        printf("INSERT THE VALUE: ");
        scanf("%d", &arr2[i]);
    }
    int size;
    if (size1 <= size2)
    {
        size = size1;
    }
    else
    {
        size = size2;
    }
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr1[i] * arr2[i];
        printf("%d ", arr[i]);
    }
    return 0;
}
