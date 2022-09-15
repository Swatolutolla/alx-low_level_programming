#include "main.h"
/**
* print_numbers - print number 0-9
*
* Return: Always Success
*/
	void print_numbers(void)
{
	char i = 48;
		do {
			_putchar(i);
			i++;
		} while (i < 58);
		_putchar('\n');
}

