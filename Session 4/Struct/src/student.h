#pragma once
#include <stdbool.h>

typedef enum  
{
    Good,
    Bad
} student_type;

typedef struct student
{
    char name[25];
    int age;
    student_type type;
} student_t;  // Changed struct student to student_t

void student_PrintInfo(student_t s);
bool student_isAdult(student_t s);
void print_student(student_t student_t);  // Changed struct student_t to student_t
