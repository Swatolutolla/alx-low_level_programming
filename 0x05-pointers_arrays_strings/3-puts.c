#include "main.h"
/**
* _puts - print a string to the stdout
*
*@str: is the point to the string
* Return: Always Success
*/
void _puts(char *str)
{
	int len = 0;
	int i;

	while (*str != '\0')
	{
		str++;
		len++;
	}

	str = str - len;
	for (i = 0; i <= len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

