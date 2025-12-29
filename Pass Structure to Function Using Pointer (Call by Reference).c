//Program to Pass Structure to Function Using Pointer (Call by Reference)
#include <stdio.h>
struct Student
 {
    int id;
    char name[20];
};
void display(struct Student *s)
 {
    printf("ID: %d\n", s->id);
    printf("Name: %s\n", s->name);
}
int main()
 {
    struct Student s1 = {101, "Anu"};
    display(&s1); 
    return 0;
}
