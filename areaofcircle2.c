#include <stdio.h>
#include <math.h>

// for testing only - do not change
void getTestInput(int argc, char* argv[], float* a, int* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%f", a);
    sscanf(argv[2], "%d", b);
  }
}



// add your areaOfCircle function here - it must NOT printf, instead it must
// return the result to be printed in main
float areaOfCircle(float radius)
{
  float area = radius * radius * M_PI;
  return area;
}



int main(int argc, char* argv[]) 
{
  // the two variables which control the number of times areaOfCircle is call$
  // in this case 5.2, 6.2, 7.2
  float start = -1;
  char lower[256];
  char upper[256];
  float end = -1;

  while (start == -1 || end == -1)
  {
  printf("What is the starting radius?\n");
  fgets(lower, 256, stdin);
  sscanf(lower, "%f", &start);

  printf("What is the ending radius?\n");
  fgets(upper, 256, stdin);
  sscanf(upper, "%f", &end);
  }

  int reps = end - start + 1;

  // for testing only - do not change
  getTestInput(argc, argv, &start, &reps);

  printf("calculating area of circle starting at %f, and ending at %f\n", start, start+reps-1);
  
  // add your code below to call areaOfCircle function with values between
  // start and end
  for (int i = 0; i < reps; i++)
  {
        float area = areaOfCircle(start);
        printf("Area of %f is %f\n", start, area);
        start++;
  }


  
}

