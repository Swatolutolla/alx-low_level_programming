#include "main.h"
/**
* print_sign - print the sign of a number
*
*@n: is the number to be checked
* Return: Always 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		n = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		n = -1;
		_putchar('-');
	}
	else
	{
		n = 0;
		_putchar('0');
	}
	return (n);
}
