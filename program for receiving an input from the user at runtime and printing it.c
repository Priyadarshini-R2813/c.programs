//C program for receiving an input from the user at runtime and printing it 
#include <stdio.h>

int main()
 {
    int a; // variable to store user input

    printf("Enter a number: ");  
    scanf("%d",&a);  // taking input from user

    printf("You entered: %d\n", a);  // printing the input

    return 0;
}
