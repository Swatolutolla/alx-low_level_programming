#include "main.h"
#include <string.h>
/**
* string_toupper - change all case of a string to upper case
*
*@str: is the string of character
* Return: Always Sucess
*/
char *string_toupper(char *str)
{
	int i;
	int j = strlen(str);

	for (i = 0; i <= j; i++)
	{
		if (str[i] >= 91 && str[1] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
