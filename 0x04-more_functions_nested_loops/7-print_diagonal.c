#include "main.h"
/**
* print_diagonal - print \ in a diagonal manner
*
*@n: is the number of \
* Return: Always Success
*/
void print_diagonal(int n)
{

		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			int i = 0;

			for ( ; i < n; i++)
			{
				int j = 0;

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
