/*
PROGRAM: INPUT n AND TAKE n INTEGERS INTO AN ARRAY; PRINT THEM
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE N: ");
    scanf("%d", &n);
    int numbers[n];
    int i=1;
    if(n>0){

        for (i = 1; i <= n; i++)
        {
            numbers[i - 1] = i;
        }
        for (int j = 0; j < n; j++)
        {
            printf("%d ", numbers[j]);
        }
    }
    else{
        printf("ENTER A VALID NUMBER!!");
    }
    return 0;
}