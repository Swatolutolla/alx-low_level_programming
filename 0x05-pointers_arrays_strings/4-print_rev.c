#include "main.h"
#include <string.h>
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

	len = strlen(s);


	for (i = len - 1; i >= 0; --i)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

