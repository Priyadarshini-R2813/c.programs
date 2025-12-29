//using pointers and function find the greater number
#include <stdio.h>
int Greater(int *x, int *y) {
    if (*x > *y)
        return *x;
    else
        return *y;
}
int main()
 {
    int a, b, greater;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    greater = Greater(&a, &b);

    printf("Greater number is: %d\n", greater);

    return 0;
}
