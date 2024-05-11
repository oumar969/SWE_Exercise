#include <stdbool.h>
#include <stdio.h>
#include <string.h> // Added to include the string library
#include "student.h"

bool student_isAdult(student_t student)
{
    return student.age >= 18;
}

void student_print(student_t student)
{
    printf("The student's name is %s\n", student.name);

    if (student_isAdult(student))
    {
        printf("The student is an adult\n");
    }
    else
    {
        printf("The student is not an adult\n");

        printf("and he is a");

        if (student.type == Good)
        {
            printf(" good student\n");
        }
        else if (student.type == Bad)
        {
            printf(" bad student\n");
            printf("student. \n \n");
        }
    }
}