#include "main.h"
/**
* print_most_numbers - print number 0-9
*
* Return: Always Success
*/
	void print_most_numbers(void)
{
	char i = 48;
		do {
			_putchar(i);
			i++;
			if (i == 50 || i == 52)
			{
				i = i + 1;
			}
		} while (i < 58);
		_putchar('\n');
}

