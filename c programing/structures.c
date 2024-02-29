#include<stdio.h>
#include<string.h>

struct student {
    int roll ;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1. roll = 112036;
    s1. cgpa = 8.8;
    //s1. name = "pankaj"

    strcpy(s1.name, "PANKAJ");

    printf("student name: %s\n", s1.name);
    printf("student roll no:%d\n", s1.roll);
    printf("student cgpa: %f", s1.cgpa);

    return 0;
}