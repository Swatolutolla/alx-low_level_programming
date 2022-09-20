#include "main.h"
/**
* _puts - print a string to the stdout
*
*@str: is the point to the string
* Return: Always Success
*/
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

