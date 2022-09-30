#include "main.h"
#include <string.h>
/**
* _strncpy - concatenates two strings
*
*@dest: pointer to the first string
*@src: pointer to the second screen
*@n: is the maximum bytes from
* Return: Always dest (Success)
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n && src[i] != '\0'); i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	dest[i] = '\0';
	return (dest);
}
