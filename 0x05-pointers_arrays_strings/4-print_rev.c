#include "main.h"
/**
* print_rev - print a string in a reverse manner
*
*@s: is the pointer of the string
* Return: Alwasy Success
*/
void print_rev(char *s)
{
	int len;
	int i;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	i = len;
	s = s - len;
	for ( ; i >= 0; --i)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

