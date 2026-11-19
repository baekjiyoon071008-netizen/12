#include <stdio.h>
#include <string.h>

struct student 
{
    int ID;
    char name[30];
    double grade;
};

int main(void)
{
    struct student s1 = {2615482, "jiyoon", 4.3};

    s1.ID = 2615482;
    strcpy(s1.name, "jiyoon2");
    s1.grade = 3.7;

    printf("ID: %d\n", s1.ID);
    printf("Name: %s\n", s1.name);
    printf("Grade: %.1f\n", s1.grade);

    return 0;
}