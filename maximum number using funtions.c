//find the maximum number using funtions
#include <stdio.h>

// Function declaration
int findMax(int a, int b);

int main() {
    int num1, num2, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    max = findMax(num1, num2);

    printf("The maximum number is: %d\n", max);

    return 0;
}

// Function definition
int findMax(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}
