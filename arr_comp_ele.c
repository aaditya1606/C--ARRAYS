/*
PROGRAM: COMPARE TWO ARRAY- CHECK IF THEY CONTAIN THE SAME ELEMENTS(IGNORE ORDER)
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
        printf("ENTER A VALID SIZE! RE-ENTER: ");
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
        printf("ENTER A VALID SIZE! RE-ENTER: ");
        scanf("%d", &size2);
    }
    int arr2[size2];
    if (size1 == size2)
    {
        for (int i = 0; i < size2; i++)
        {
            printf("INSERT THE VALUE: ");
            scanf("%d", &arr2[i]);
        }
        int visited[size1];
        for (int i = 0; i < size1; i++)
        {
            visited[i] = 0;
        }
        bool flag = false;
        for (int i = 0; i < size1; i++)
        {
            flag = false;
            for (int j = 0; j < size1; j++)
            {
                if (arr1[i] == arr2[j] && visited[j] == 0)
                {
                    flag = true;
                    visited[j] = 1;
                    break;
                }
            }
            if (flag == false)
            {
                printf("ARRAYS ARE NOT SAME!!");
                break;
            }
        }
        if (flag == true)
        {
            printf("ARRAYS ARE SAME!!");
        }
    }
    else
    {
        printf("SINCE SIZE OF THE ARRAYS ARE NOT SAME SO THE ARRAYS CANNOT BE SAME TOO!!");
    }
    return 0;
}