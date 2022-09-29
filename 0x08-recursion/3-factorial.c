#include "main.h"
/**
* factorial - calculated the factorial of an integer
*
*@n: is the integer whose factorial is to be calculated
* Return: Always integer (Success)
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

