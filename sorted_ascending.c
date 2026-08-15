/*
PROGRAM: CHECK IF THE ARRAY IS SORTED IN ASCENDING OR NOT
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
    bool flag = false;
    for (int i = 0; i < size - 1; i++)
    {
        flag = false;
        if (arr[i] <= arr[i + 1])
        {
            flag = true;
        }
        else{break;}
    }
    if (flag == true)
    {
        printf("SORTED!!");
    }
    else
    {
        printf("NOT SORTED!!");
    }
    return 0;
}