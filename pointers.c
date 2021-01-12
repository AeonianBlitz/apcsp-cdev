#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %p\n", (void*)ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %p\n", (void*)&a);

  float d = 0.05;
  float e = 0.06;
  printf("The value of d is %d\nThe address of d is %p\n", d, &d);
  printf("The value of e is %d\nThe address of e is %p\n", e, &e);

  float* pointerd = &d;
  float* pointere = &e;

  float* temp;
  temp = pointerd;
  pointerd = pointere;
  pointere = temp;

}
