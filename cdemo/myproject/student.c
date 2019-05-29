#include "student.h"

void printStudent(struct Student* student)
{
  printf("\nFirst Name: %s\n", student->firstname);
  printf("Last Name: %s\n", student->lastname);
  printf("Age: %d\n", student->age);
  printf("Student ID: %d\n", student->sid);
}

