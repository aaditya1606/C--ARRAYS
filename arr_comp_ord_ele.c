/*
PROGRAM: COMPARE TWO ARRAYS- CHECK IF THEY ARE EQUAL(SAME ELEMENTS AND ORDER)
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>
#include <stdbool.h>
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
        for (int j = 0; j < i; j++)
        {
            if (arr1[i] == arr1[j])
            {

                printf("YOU HAVE ALREADY ENTERED THIS NUMBER!! RE-ENTER: ");
                scanf("%d", &arr1[i]);
            }
        }
    }
    int size2;
    printf("ENTER THE SIZE OF THE SECOND ARRAY: ");
    scanf("%d", &size2);
    while (size2 <= 0)
    {
        printf("ENTER A VALID SIZE!! RE-ENTER: ");
        scanf("%d", &size2);
    }
    if (size1 == size2)
    {
        int arr2[size2];
        for (int i = 0; i < size2; i++)
        {
            printf("INSERT THE VALUE: ");
            scanf("%d", &arr2[i]);
            for (int j = 0; j < i; j++)
            {
                if (arr2[i] == arr2[j])
                {

                    printf("YOU HAVE ALREADY ENTERED THIS NUMBER!! RE-ENTER: ");
                    scanf("%d", &arr2[i]);
                }
            }
        }
        bool flag = true;
        for (int i = 0; i < size2; i++)
        {
            if (arr1[i] != arr2[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == false)
        {
            printf("ARRAYS ARE NOT SAME!!");
        }
        else
        {
            printf("ARRAYS ARE SAME!!");
        }
    }
    else
    {
        printf("SINCE SIZE OF THE ARRAYS ARE NOT SAME SO THEY CANNOT BE THE SAME ARRAYS!");
    }

    return 0;
}
