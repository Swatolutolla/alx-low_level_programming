#include "main.h"
/**
* print_triangle - print a triangle
*
*@size: is the size of the triangle
* Return: Always Success
*/
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j = 0;

		for ( ; j <= size; j++)
		{
			int i = 0;

			for ( ; i <= size; i++)
			{
				if (size - i >= j)
				{
					_putchar(' ');
				}
				else
				{
					putchar(35 );
				}
			}
			putchar('\n');
		}
	}
}
