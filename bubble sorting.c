//Write a C program to sort an array using Bubble Sort. The program should sort 6 integers in ascending order
#include <stdio.h>
int main() 
{
    int arr[6], i, j, temp;
   printf("Enter 6 integers:\n");
    for(i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
   printf("Sorted array in ascending order:\n");
    for(i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
