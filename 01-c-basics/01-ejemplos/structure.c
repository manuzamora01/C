#include<stdio.h>

struct student //union funciona igual, es solo cambiar struct por union
{
    int rollno;
    char name[20];
    float cgpa;
};

void main()
{
    struct student s1; //union funciona igual, es solo cambiar struct por union
    printf("Enter rollno, name, CGPA\n");
    scanf("%d%s%f", &s1.rollno, &s1.name, &s1.cgpa);

    printf("Information of student is:\n");
    printf("Rollno = %d Name = %s CGPA = %f", s1.rollno, s1.name, s1.cgpa);
}