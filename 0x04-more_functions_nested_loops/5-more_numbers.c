#include "main.h"
/**
* more_numbers - prints 1 - 14 10 times
*
* Return: Always Success
*/
void more_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
