/*
PROGRAM: FIND THE DIFFERENCE BETWEEN THE SMALLEST AND THE LARGEST ELEMENT
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    int size;
    printf("ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d", &size);
    while(size<=0){
        printf("ENTER A VALID SIZE!! RE-ENTER: ");
        scanf("%d", &size);
    }
    int arr[size];
    for(int i=0;i<size;i++){
        printf("INSERT THE VALUE: ");
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    int min=arr[size-1];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("MAXIMUM ELEMENT: %d\n",max);
    printf("MINIMUM ELEMENT: %d\n",min);
    printf("DIFFERENCE: %d\n",max-min);
    return 0;
}