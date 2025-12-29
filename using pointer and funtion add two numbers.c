//using pointer and funtion add two numbers
#include <stdio.h>
int addNumbers(int *x, int *y)
 {
    return (*x + *y);
}

int main() {
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = addNumbers(&a, &b);
    printf("Sum = %d\n", sum);
    return 0;
}
