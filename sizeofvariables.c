#include<stdio.h>

int main()
{
  double a = 6.99999;
  float b = 299.0;
  unsigned int c = 100000;
  signed int d = 123456789;
  char e = 'A';
  
  printf("double a value %.4f and size %d bytes.\n", a, sizeof(a));
  printf("float b value %4.2f and size %d bytes.\n", b, sizeof(b));
  printf("unsigned int c value %d (oct %o, hex %x) and "		\
	 "size %d bytes.\n", c, c, c, sizeof(c));
  printf("signed int d value %d and size %d bytes.\n", d, sizeof(d));
  printf("char e value %c and size %d bytes.\n", e, sizeof(e));
}
