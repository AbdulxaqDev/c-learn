#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
char surname[50];
    int age;
    double gpa;
};

int main()
{

    struct Student student1;

    strcpy(student1.name, "brendan\n");
    strcpy(student1.surname, "eich\n");
    student1.age = 30;
    student1.gpa = 99.8;

    printf("%s", student1.name);

    return 0;
}