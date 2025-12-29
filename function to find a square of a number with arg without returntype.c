// function to find a square of a number with arg without returntype
#include<stdio.h>
void square(int n);
void main()
{
int num;
printf("enter a number:");
scanf("%d",&num);
square(num);
}
void square(int n)
{
    int result=n*n;
    printf("square=%d",result);
}
