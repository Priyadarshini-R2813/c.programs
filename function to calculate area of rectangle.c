//function to calculate area of rectangle
#include<stdio.h>
int Rarea(int l,int b)
{
    return l*b;
}
int main()
{
    int l,b, area;
    printf("enter length and breath of the rectangle ");
    scanf("%d %d ",&l,&b);
    printf("the area is = %d",area);
    return 0;
}