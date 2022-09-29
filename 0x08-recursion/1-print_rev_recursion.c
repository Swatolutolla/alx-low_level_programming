#include "main.h"
#include <string.h>
/**
* _print_rev_recursion - print strings using recursion
*
*@s: is the string to be reversersed
* Return: Always Success
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}


