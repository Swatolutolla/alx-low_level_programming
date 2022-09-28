#include "main.h"
/**
* _puts_recursion - print a character using recursion
*
*@s: is the pointer to the string
* Return: Always Success
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
