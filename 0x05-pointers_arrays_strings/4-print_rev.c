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

	while (*s != '\0')
	{
		s++;
		len++;
	}
	s = s - len;
	for ( ; len >= 0; --len)
	{
		_putchar(*(s + len));
	}
	_putchar('\n');
}

