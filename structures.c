//structures
#include<stdio.h>
#include<string.h>
struct student
{
   int rollnum;
   char name[100];
   float marks;
};
int main()
{
struct student s1={101,"abcd",35};
printf("--student record--\n");
printf("rollnum.%d\n",s1.rollnum);
printf("name.%s\n",s1.name);
printf("marks.%2f\n",s1.marks);
s1.marks=90.0;
printf("updated marks:%2f\n",s1.marks);
return 0;
}



