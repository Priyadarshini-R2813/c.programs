//Write a C program to print the sum of main diagonal elements of a 3×3 matrix.
#include <stdio.h>
int main() 
{
    int matrix[3][3], i, j, sum = 0;
     printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < 3; i++)
     {
        sum += matrix[i][i];  // Adding main diagonal elements
    }
     printf("Sum of main diagonal elements = %d\n", sum);
     return 0;
}
