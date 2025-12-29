// program to find the with returntype with arguement
#include<stdio.h>
int square(int n)
{
return n*n;
}
int main()
{
    int num,result;
    printf("enter a number:");
    scanf("%d",&num);
    result=square(num);
    printf("sqaure=%d",result);
}
