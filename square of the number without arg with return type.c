// square of the number without arg with return type
#include<stdio.h>
int square();
void main()
{
    int result=square();
    printf("square=%d",result);
}
int square()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    return num*num;
}