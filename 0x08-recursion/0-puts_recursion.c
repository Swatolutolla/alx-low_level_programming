#include "main.h"
/**
* _puts_recursion - print a character using recursion
*
*@s: is the pointer to the string
* Return: Always Success
*/
void _puts_recursion(char *s)
{
	static int i;

	i = 0;
	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(s[i]);
		s++;
		_puts_recursion(s);
	}
}
