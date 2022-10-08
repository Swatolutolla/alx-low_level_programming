#include <stdlib.h>
#include "main.h"
/**
* create_array - create an array and initialize it
*
*@size: is the size of the array
*@c: is the character to be initialized
* Return: Always *ptr
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = malloc(sizeof(unsigned int) * size);
	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	for ( ; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
