#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// student structure
//struct Student...
struct Student {
        char firstName[50];
        char lastName[50];
        int age;
};

void printStudent(struct Student* student)
{
  printf("\n  Student: %s %s\n", student->firstName, student->lastName);
  printf("    age: %d\n", student->age); 
}


void printAllStudents(struct Student students[], int num)
{
for (int i = 0; i < num; i++)
	{
	printStudent(&students[i]); 
	}
 }


int main()
{

  // an array of students
  //xxx students;
  int numStudents = 0;
  struct Student students[500];
  while (1)
  {
    char c;
    char input[256];
    printf("\nEnter a to add, p to print, q to quit:");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q')
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      //struct Student students[numStudents];
      printAllStudents(students, numStudents);
      continue;
    }
    else if (c == 'a')
    {
      // enter a new student


  char firstInput[50];
  char lastInput[50];
  char ageInput[50];

        printf("First name: ");
        fgets(input, 256, stdin);
	sscanf(input,"%s", firstInput);

        printf("Last name: ");
        fgets(input, 256, stdin);
        sscanf(input,"%s", lastInput);

        printf("Age: ");
        fgets(input, 256, stdin);
        sscanf(input,"%s", ageInput);

        strcpy(students[numStudents].firstName, firstInput);
        strcpy(students[numStudents].lastName, lastInput);
        students[numStudents].age = atoi(ageInput);
	numStudents++;
    }
  }
  
  printf("\nGoodbye!\n");
}
