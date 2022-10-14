#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - print numbers followed by a new line
*
*@seperator: is the seprator of the numbers
*@n: is the number of integers to be passed
* Return: Nothing
*/
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lst;

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(lst, int));
		if (seperator && i < (n - 1))
		{
			printf("%s", seperator);
		}
	}
	va_end(lst);
	_putchar('\n');
}

