#include <stdio.h>
#include <string.h>
#include "student.h"

int main(int argc, char const *argv[])
{
  student_t nerd; // Changed student_s to student_t
  nerd.age = 20;
  strcpy(nerd.name, "Artesh");
  nerd.type = Good; // Changed good to Good

  student_print(nerd);

  return 0; // Added return statement
}
