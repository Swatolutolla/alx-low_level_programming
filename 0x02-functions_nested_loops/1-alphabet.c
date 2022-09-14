#include "main.h"
/**
* print_alphabet -  print all the english alphabets
i*
* Return: Always Success
*/
void print_alphabet(void)
{
	char a = 97;
		while (a < 123)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
}
