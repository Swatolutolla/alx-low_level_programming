#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - sum the number of numbers given
*
*@n: is the number of intigers given to the arguments
* Return: the sum of numbers
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	for ( ; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
