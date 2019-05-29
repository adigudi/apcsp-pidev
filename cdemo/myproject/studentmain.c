#include <stdio.h>
#include "student.h"

int main()
{
  char input[256];
  char ans;
  struct Student students[256];
  int b = TRUE;
  int count = 0;
  while (b == 0)
  {
    printf("Create New Student (Yes/No)?  ");
    fgets(input, 100, stdin);
    sscanf(input, "%s", &ans);
    if (strcmp(&ans, "Yes") == 0)
    {
      b = TRUE;
      char firstname[100];
      char lastname[100];
      int age;
      int sID;
      printf("Enter First Name of Student:  ");
      fgets(input, 100, stdin);
      sscanf(input, "%s", firstname);
      printf("Enter Last Name of Student:  ");
      fgets(input, 100, stdin);
      sscanf(input, "%s", lastname);
      printf("Enter Age of Student:  ");
      fgets(input, 100, stdin);
      sscanf(input, "%d", &age);
      printf("Enter Student ID of Student:  ");
      fgets(input, 100, stdin);
      sscanf(input, "%d", &sID);
      printf("\n");
      strcpy(students[count].firstname, firstname);
      strcpy(students[count].lastname, lastname);
      students[count].age = age;
      students[count].sid = sID;
      count++;
    }
    else
    {
      b = FALSE;
      for (int i = 0; i < count; i++)
      {
        printStudent(&students[i]);
      }
    }
  }
  return 0;
}
