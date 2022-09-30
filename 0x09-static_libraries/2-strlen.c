#include "main.h"
/**
* _strlen - returns the lenght of a string
*
*@s: is the pointer of the string
* Return: Always Sucess
*/
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}
	return (c);
}
