/*
PROGRAM: INPUT AN ELEMENT X-CHECK IF IT EXISTS IN ARRAY
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>

int main()
{
    printf("INSERT '0' TO STOP PUTTING INPUTS IN ARRAY!!\n");
    int i = 0, nums[100];
    printf("INSERT THE VALUE: ");
    scanf("%d", &nums[i]);
    while (nums[i] != 0)
    {
        i++;
        printf("INSERT THE VALUE: ");
        scanf("%d", &nums[i]);
    }
    int x;
    printf("ENTER THE NUMBER TO CHECK IF IT EXIST IN ARRAY: ");
    scanf("%d", &x);
    for (int j = 0; j <= i; j++)
    {
        if (x == nums[j])
        {
            printf("%d", 1);
            break;
        }
    }
    return 0;
}