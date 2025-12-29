//find the sqaure of the number using pointers
#include <stdio.h>

int main()  
{
    int num, square;
    int *ptr;
    printf("Enter a number: ");
    scanf("%d", &num);
     ptr = &num;
     square = (*ptr) * (*ptr);
     printf("Square of %d is: %d\n", num, square);
    return 0;
}

