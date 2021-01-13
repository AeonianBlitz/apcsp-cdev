#include <stdio.h>
#include <string.h>

int main()
{

char firstString[26];
for (int i = 0; i < 26; i++)
	{
	int asciiValue = 97 + i;
	firstString[i] = asciiValue;
	}
firstString[26]='\0';

char secondString[26] = "abcdefghijklmnopqrstuvwxyz";
secondString[26] = '\0';

if (strcmp(firstString, secondString) == 0)
	printf("The strings are the same\n");
else
	printf("The strings are different\n");

for (int d = 0; d < 26; d++)
	{ 
        firstString[d] -= 32;
	} 

if (strcmp(firstString, secondString) == 0)
        printf("The strings are the same\n");
else
        printf("The strings are different\n");

char thirdString[52];
strcat(thirdString, firstString);
strcat(thirdString, secondString);
printf("%s\n%s\n%s\n", firstString, secondString, thirdString);

}
