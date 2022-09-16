#include "main.h"
/**
* print_diagonal - print \ in a diagonal manner
*
*@n: is the number of \
* Return: Always Success
*/
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for ( ; i < n; i++)
			{
				for ( ; j < n; j++)
				{
					if (j == i)
					{
						_putchar('\\');
					}
					else
					{
						_putchar(' ');
					}
				}
				_putchar('\n');
			}
		}
}
