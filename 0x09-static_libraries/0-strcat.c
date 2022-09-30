#include "main.h"
#include <string.h>
/**
* _strcat - is use to concatenates two string
*@dest: pointer to the string of the main
*@src: is the pointer of the second string
* Return: Always dest (Success)
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}

