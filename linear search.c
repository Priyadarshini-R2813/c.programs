//Write a C program to perform Linear Search on an array of 10 integers.
#include <stdio.h>
int main() {
    int arr[10], i, key, found = 0;
    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
     printf("Enter the element to search: ");
    scanf("%d", &key);
    for(i = 0; i < 10; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }
    if(found == 1) {
        printf("%d is found at position %d.\n", key, i + 1);
    } else {
        printf("%d is not found in the array.\n", key);
    }
 return 0;
}
