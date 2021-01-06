#include<stdio.h>

int main()
{
  int a = 545;
  char b = 'b';
  float c = 0.654;
  double d = 0.654321;
  unsigned int e = 5000 ;
  short int f = 4;

  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));
  printf("char b value: %c and size: %lu bytes\n", b, sizeof(b));
  printf("float c value: %f and size: %lu bytes\n", c, sizeof(c));
  printf("double d value: %f and size: %lu bytes\n", d, sizeof(d));
  printf("unsigned int e value: %u and size: %lu bytes\n", e, sizeof(e));
  printf("short int f value: %hd and size: %lu bytes\n", f, sizeof(f));
}

