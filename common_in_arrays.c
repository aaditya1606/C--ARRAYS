/*
PROGRAM: FIND THE COMMON ELEMENTS BETWEEN TWO ARRAYS
LANGUAGE: C
AUTHOR-AADITYA SHAKYA
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int size1;
    printf("ENTER THE SIZE OF THE FIRST ARRAY: ");
    scanf("%d", &size1);
    int arr1[size1];
    for (int i = 0; i < size1; i++)
    {
        printf("INSERT THE VALUE: ");
        scanf("%d", &arr1[i]);
    }
    int size2;
    printf("ENTER THE SIZE OF THE SECOND ARRAY: ");
    scanf("%d", &size2);
    int arr2[size2];
    for (int i = 0; i < size2; i++)
    {
        printf("INSERT THE VALUE: ");
        scanf("%d", &arr2[i]);
    }
    bool common=false;
    for (int i = 0; i < size1; i++)
    {
        bool visited = false;
        common=false;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr1[i] == arr1[j])
            {
                visited = true;
            }
        }
        if (visited == true)
            continue;
        for (int k = 0; k < size2; k++)
        {
            if (arr1[i] == arr2[k])
            {
                common=true;
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    if(common==false){
            printf("NO COMMON ELEMENTS!!");
        }
    return 0;
}