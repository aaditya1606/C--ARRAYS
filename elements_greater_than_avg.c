/*
PROGRAM: COUNT HOW MANY ELEMENTS ARE GREATER THAN THE AVERAGE OF THE ARRAY
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>

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
    int arr[size], sum = 0, count = 0;
    for (int i = 0; i < size; i++)
    {
        printf("INSERT THE VALUE: ");
        scanf("%d", &arr[i]);
        sum += arr[i];
        count++;
    }
    int avg = sum / count, ans = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > avg)
        {
            ans++;
        }
    }
    printf("NUMBER OF ELEMENTS GREATER THAN AVG OF ARRAY: %d", ans);
    return 0;
}