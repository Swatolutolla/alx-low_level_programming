#include "main.h"
/**
* print_triangle - print a triangle
*
*@size: is the size of the triangle
* Return: Always Success
*/
void print_triangle(int size)
{
	int j, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (j = 0; j <= size; j++)
		{

			for (i = 0; i <= size; i++)
			{
				if (size - i >= j)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
			}
			putchar('\n');
		}
	}
}
