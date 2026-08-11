/*
PROGRAM: COUNT HOW MANY ELEMENTS ARE COMMON BETWEEN TWO ARRAYS
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    int size1;
    printf("ENTER THE SIZE OF THE FIRST ARRAY: ");
    scanf("%d", &size1);
    while(size1<=0){
        printf("ENTER A VALID SIZE!! RE-ENTER: ");
        scanf("%d", &size1);
    }
    int arr1[size1];
    for(int i=0;i<size1;i++){
        printf("INSERT THE VALUE: ");
        scanf("%d", &arr1[i]);
    }
    int size2;
    printf("ENTER THE SIZE OF THE SECOND ARRAY: ");
    scanf("%d", &size2);
    while(size2<=0){
        printf("ENTER A VALID SIZE!! RE-ENTER: ");
        scanf("%d", &size2);
    }
    int arr2[size2];
    for(int i=0;i<size2;i++){
        printf("INSERT THE VALUE: ");
        scanf("%d", &arr2[i]);
    }
    int count=0;
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                count++;
                break;
            }
        }
    }
    printf("NUMBER OF COMMON ELEMENTS: %d",count);
}