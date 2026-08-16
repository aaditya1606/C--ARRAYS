/*
PROGRAM: PRINT THE FREQUENCY OF EACH DISTINCT ELEMENT
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
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        count=0;
        bool flag=true;
        for (int k = i - 1; k >= 0; k--)
        {
            if (arr[i] == arr[k])
            {
                flag=false;
            }
        }
        if(flag==false)continue;
        for (int j = i; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        printf("COUNT OF %d: %d\n", arr[i], count);
    }
    return 0;
}