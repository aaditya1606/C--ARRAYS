/*
PROGRAM: FIND THE AVERAGE OF ARRAY ELEMENTS
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int size, count = 0, sum = 0;
    printf("ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d", &size);
    while (size <= 0)
    {
        printf("RE-ENTER THE SIZE: ");
        scanf("%d", &size);
    }
    int i = 1, numbers[size];
    for (i = 1; i <= size; i++)
    {
        printf("INSERT THE VALUE: ");
        scanf("%d", &numbers[i - 1]);
        count++;
        sum += numbers[i - 1];
    }
    if (sum > 0)
    {
        printf("AVG: %.2f", (float)sum / count);
    }
    else
    {
        printf("SUM SHOULD BE POSITIVE!");
    }

    return 0;
}