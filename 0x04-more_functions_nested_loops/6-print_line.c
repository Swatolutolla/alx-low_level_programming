#include "main.h"
/**
* print_line - prints a line
*
*@n: number of lone
*Return: Always Success
*/
void print_line(int n)
{
	int j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	while (j < n)
	{
		putchar('_');
		j++;
	}
	_putchar('\n');
	}
}
