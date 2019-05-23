#include <stdio.h>

int main()
{
  int a = 0;
  int b = 0;
  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }
  a = 2;
  b = 3;
  if (a != b)
  {
    printf("a is equal to b\n");
  }
  else
  {
    printf("a is not equal to b\n");
  }
  a = 4;
  b = 3;
  if (a > b)
  {
    printf("a is greater than b\n");
  }
  else
  {
    printf("a is less than b\n");
  }
  a = 4;
  b = 4;
  if (a >= b)
  {
    printf("a is greater than or equal to b\n");
  }
  else
  {
    printf("a is less than or equal to b\n");
  } 
  a = 2;
  b = 0;
  if (a == 0 && b == 0)
  {
    printf("a and b are equal to 0\n");
  }
  else
  {
    printf("a and b are NOT equal to 0\n");
  } 
  a = 2;
  b = 0;
  if (a == 0 || b == 0)
  {
    printf("Either a or b is equal to 0\n");
  }
  else
  {
    printf("Neither a nor b is equal to 0\n");
  } 
  a = 2;
  b = 0;
  if (!(a == 0))
  {
    printf("a is NOT equal to 0\n");
  }
  else
  {
    printf("a is equal to 0\n");
  } 
}
