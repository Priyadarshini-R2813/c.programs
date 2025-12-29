//find the maxium number
#include<stdio.h>
void findmax(int *a,int *b,int*max)
{
    *max=(*a>*b)? *a:*b;
}
int main()
{
    int x=8,y=15,max;
    findmax(&x,&y,&max);
    printf("max:%d\n",max);
    return 0;
}