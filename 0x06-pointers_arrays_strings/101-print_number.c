#include "main.h"
/**
* print_number - print and integer
*
*@n: is the integer to be printed
* Return: Always Success
*/
void print_number(int n)
{
	unsigned int j = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	j = n;
	if (j / 10)
	{
	print_number(j / 10);
	}
	_putchar(j % 10 + '0');
}
