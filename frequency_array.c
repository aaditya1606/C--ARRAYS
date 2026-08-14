/*
PROGRAM: CREATE A FREQUENCY ARRAY OF NUMBERS(COUNT OCCURENCE OF EACH NUMBER)
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
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int freqarr[max+1];
    for (int i = 0; i <=max; i++)
    {
        freqarr[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        bool alreadyflag=false;
        for (int k = i - 1; k >= 0; k--)
        {
            if (arr[i] == arr[k])
            {
                alreadyflag=true;
                break;
            }
        }
        if(alreadyflag==true){
            continue;
        }
        for (int j = i; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        freqarr[arr[i]] = count;
    }
    for (int i = 0; i <= max; i++)
    {
        printf("%d ", freqarr[i]);
    }
    return 0;
}