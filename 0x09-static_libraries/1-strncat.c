#include "main.h"
#include <string.h>
/**
* _strncat - concatenates two strings
*
*@dest: pointer to the first string
*@src: pointer to the second screen
*@n: is the maximum bytes from
* Return: Always dest (Success)
*/
char *_strncat(char *dest, char *src, int n)
{
	int  j = strlen(dest);
	int k = strlen(src);
	int i;

	for (i = 0; (i < n && i <= k); i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}
