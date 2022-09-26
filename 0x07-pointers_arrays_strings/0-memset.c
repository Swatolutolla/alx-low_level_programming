#include "main.h"
/**
* _memset - the function fills the first n bytes of the memory
*
*@s: is the pointer to the string
*@b: is the character to be filled with
*@n: is the number of int
* Return: Always s  Success
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0;  i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}


