#include "main.h"
#include "string.h"
/**
* _strpbrk - searches a string for any of a set of bytes
*
*@s: is the string to be searched
*@accept: is the pointer to be seacrhed from
* Return: Always Success
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;
	int k = strlen(s) * strlen(accept);

	if (k != 0)
	{
		while (s[i] != '\0')
		{
			j = 0;
			while (accept[j] != '\0')
			{
				if (s[i] == accept[j])
				{
					return (s + i);
				}
				else
				{
				j++;
				}
			}
			i++;
		}
	}
	return (NULL);
}
