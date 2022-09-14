#include "main.h"
/**
* print_alphabet_x10 - print all english alphabets 10 times
*
* Return: Always Success
*/
void print_alphabet_x10(void)
{
	int a = 0;

	for (a = 0; a < 10; a++)
	{
		char b = 97;

		while (b < 123)
		{
			_putchar(a);
			b++;
		}
		_putchar('\n');
	}
}

