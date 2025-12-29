//program to store and display multiple student records using array of structure
#include<stdio.h>
struct student
{
    int id;
    char name[20]
};
int main()
{
struct student s[2]={{101,"anu"},{102,"vasu"}};
for(int i=0;i<2;i++)
printf("ID:%d,name:%s\n",s[i].id,s[i].name);
return 0;
}