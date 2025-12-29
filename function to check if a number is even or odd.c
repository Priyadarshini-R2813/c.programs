//function to check if a number is even or odd
#include<stdio.h>
int check(int n);
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    return 0;
}
int check(int n)
{
    if(n % 2 ==0)
    {
        printf("%d is a even number",n);
    }
    else
    {
        printf("%d is a odd number",n);
    }
}