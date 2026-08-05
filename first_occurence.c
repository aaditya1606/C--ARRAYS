/*
PROGRAM: FIND THE FIRST OCCURENCE OF A GIVEN NUMBER
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>

int main()
{
    printf("ENTER '0' TO STOP PUTTING INPUTS IN THE ARRAY!!\n");
    int i = 0, numbers[1000];
    printf("INSERT THE VALUE: ");
    scanf("%d", &numbers[i]);
    while (numbers[i] != 0)
    {
        i++;
        printf("INSERT THE VALUE: ");
        scanf("%d", &numbers[i]);
    }
    int n;
    printf("ENTER THE NUMBER TO CHECK FOR FIRST APPEARANCE: ");
    scanf("%d", &n);
    for (int j = 0; j < i; j++)
    {
        if (numbers[j] == n)
        {
            printf("INDEX OF FIRST APPEARANCE: %d", j);
            break;
        }
    }
    return 0;
}