#include "main.h"
/**
* _strcmp - comapare two functions
*
*@s1: the first string to be comapred
*@s2: the second string to be compared
* Return: Always Success the Diffrence
*/
int _strcmp(char *s1, char *s2)
{
	int sum = 0;
	int sum2 = 0;
	int i;
	int diffrence;

	for (i = 0; s1[i] != '\0'; i++)
	{
		sum += s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		sum2 += s2[i];
	}
	diffrence = sum - sum2;
	return (diffrence);
}

