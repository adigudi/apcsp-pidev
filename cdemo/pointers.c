#include <stdio.h>

int main()
{
  
  int a;
  float d;
  float e;
  int* ptrtoa;
  float* ptrtod;
  float* ptrtoe;

  ptrtoa = &a;
  ptrtod = &d;
  ptrtoe = &e;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  d = 2.7;
  printf("The value of d is %f\n", d);

  *ptrtod = 7;
  printf("The value of d is %f\n", d);

  printf("The value of ptrtoa is %f\n", ptrtod);
  printf("It stores the value %f\n", *ptrtod);
  printf("The address of d is %f\n", &d);

 e = 4.8;
  printf("The value of e is %f\n", e);

 *ptrtoe = 8;
  printf("The value of e is %f\n", e);

  printf("The value of ptrtoe is %f\n", ptrtoe);
  printf("It stores the value %f\n", *ptrtoe);
  printf("The address of e is %f\n", &e);

float temp = e; 
e = d;
d = temp;

printf("d is now %f and e is now %f\n", d, e);

}
