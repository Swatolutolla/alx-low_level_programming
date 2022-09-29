#include "main.h"
/**
* _strlen_recursion - gets the lenght of a string
*
*@s: is the pointer to the string
* Return: Always integer (Success)
*/
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
