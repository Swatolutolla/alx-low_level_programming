#include "main.h"
/**
* _memcpy - copies n bytes from memory area src to memory area dest
*
*@dest: is the area to be copied to
*@src: is the area to be copied from
*@n: is the number of memory to be copied
* Return: Always dest (Success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
