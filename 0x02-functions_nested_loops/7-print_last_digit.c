#include "main.h"
/**
* print_last_digit - print the last digit of a number
*
*@j: is the number whose last digit will be printed
* Return: Always 0 Success
*/
int print_last_digit(int j)
{
		j = j % 10;
		_putchar(j);
	return (j);
}
