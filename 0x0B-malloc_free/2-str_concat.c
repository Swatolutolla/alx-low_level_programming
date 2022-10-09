#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* str_concat - concatenates two strings
*
*@s1: string one
*@s2: string two
* Return: Always Pointer
*/
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ptr = malloc(strlen(s1) + strlen(s2) + 1);
	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(ptr + i) = s1[i];
	}
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(ptr + i) = s2[j];
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
