/*
PROGRAM: COUNT HOW MANY TIMES A GIVEN ELEMENT APPEARS
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>

int main()
{
    printf("ENTER '0' TO STOP PUTTING INPUTS IN ARRAY!!\n");
    int i = 0, numbers[1000];
    printf("INSERT THE ELEMENT: ");
    scanf("%d", &numbers[i]);
    while (numbers[i] != 0)
    {
        i++;
        printf("INSERT THE VALUE: ");
        scanf("%d", &numbers[i]);
    }
    int n, count = 0;
    printf("ENTER THE NUMBER FOR APPEARANCE COUNT: ");
    scanf("%d", &n);
    for (int j = 0; j < i; j++)
    {
        if (numbers[j] == n)
        {
            count++;
        }
    }
    printf("NUMBER OF TIMES %d HAS APPEARED IS: %d", n, count);
    return 0;
}