#include "main.h"
/**
* print_last_digit - print the last digit of a number
*
*@j: is the number whose last digit will be printed
* Return: Always Success
*/
int print_last_digit(int j)
{
	int i;
		i = j % 10;
		_putchar(i);
	return (i);
}
