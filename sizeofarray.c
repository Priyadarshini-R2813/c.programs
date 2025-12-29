//progream to find the size of array
#include<stdio.h>
int main()
{
    int numbers[]={10,20,30,40,50,60};
    int size=sizeof(numbers/sizeof(numbers[0]));
    printf("the size of array is:",size);
    return 0;

}