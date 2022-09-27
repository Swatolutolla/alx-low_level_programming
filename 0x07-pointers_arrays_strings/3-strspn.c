#include "main.h"
/**
* _strspn - gets the length of a prefix substring
*
*@s: is the string the pointer to the string
*@accept: the is the prifix
* Return: the number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for ( ; s[i] != '\0'; i++)
	{
		for ( ; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
			}
		}
	}
	return (k);
}

