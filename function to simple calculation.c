// function to simple calculation
#include <stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float divide(int a, int b);

int main() {
    int num1, num2, choice;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nChoose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Result = %d\n", add(num1, num2));
            break;
        case 2:
            printf("Result = %d\n", sub(num1, num2));
            break;
        case 3:
            printf("Result = %d\n", mul(num1, num2));
            break;
        case 4:
            if (num2 != 0)
                printf("Result = %.2f\n", divide(num1, num2));
            else
                printf("Division by zero error!\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}
