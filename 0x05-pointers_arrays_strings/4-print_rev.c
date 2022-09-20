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
	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}

