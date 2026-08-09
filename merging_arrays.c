/*
PROGRAM: MERGE TWO ARRAYS INTO THE THIRD ARRAY
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
        printf("ENTER A VALID SIZE: ");
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
        printf("ENTER A VALID SIZE: ");
        scanf("%d", &size2);
    }
    int arr2[size2];
    for (int i = 0; i < size2; i++)
    {
        printf("INSERT THE VALUE: ");
        scanf("%d", &arr2[i]);
    }
    int size = size1 + size2;
    int arr[size];
    for (int i = 0; i < size1; i++)
    {
        arr[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        arr[size1 + i] = arr2[i];
    }
    printf("\nMERGED ARRAY: ");
    for (int j = 0; j < size; j++)
    {
        printf("%d ", arr[j]);
    }
    return 0;
}