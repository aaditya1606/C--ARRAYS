/*
PROGRAM: FIND THE ELEMENTS THAT ARE IN ONE ARRAY BUT NOT IN OTHER
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>
#include <stdbool.h>
void elementfind(int arr1[], int arr2[], int size1, int size2)
{
    bool flag = false;
    int size = size1 + size2;
    int arr[size1 + size2];
    for(int i=0;i<size;i++){
        arr[i]=-1;
    }
    int index = 0;
    for (int i = 0; i < size1; i++)
    {
        flag = false;
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            arr[index] = arr1[i];
            index++;
        }
    }
    for (int i = 0; i < size2; i++)
    {
        flag = false;
        for (int j = 0; j < size1; j++)
        {
            if (arr2[i] == arr1[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            arr[index] = arr2[i];
            index++;
        }
    }
    bool duplicate=false;
    for (int i = 0; i < size; i++)
    {
        duplicate=false;
        if(arr[i]==-1){
            break;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[i] == arr[j])
            {
                duplicate=true;
                continue;
            }
        }
        if(duplicate==false){

            printf("%d ", arr[i]);
        }
    }
    if(arr[0]==-1){
        printf("NO UNCOMMON ELEMENTS!!!");
    }
}
int main()
{
    int size1;
    printf("ENTER SIZE OF THE FIRST ARRAY: ");
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
    printf("ENTER SIZE OF THE SECOND ARRAY: ");
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
    elementfind(arr1, arr2, size1, size2);
}