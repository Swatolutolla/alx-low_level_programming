#include "main.h"
/**
* print_line - prints a line
*
*@n: number of lone
*Return: Always Success
*/
void print_line(int n)
{
	int j;

	while (j < n)
	{
		if  (n <= 0)
		{
			break;
		}
		putchar('_');
		j++;
	}
	_putchar('\n');
}
