#include "main.h"
/**
* _strchr - locates a character in a string
*
*@s: is the string to b searced
*@c: is the character to be located
* Return: s (success) null for faliure
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	if (s[i] == c)
	{
	return ((s + i));
	}
	else
	{
		return (NULL);
	}
}


