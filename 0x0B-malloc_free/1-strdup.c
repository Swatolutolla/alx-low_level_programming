#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* _strdup - returns a pointer to a newly allocated space in memory
*
*@str: string to be copied
* Return: Always a pointer
*/
char *_strdup(char *str)
{
	int i;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc(strlen(str) + 1);

	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; *(str + i) != '\0'; i++)
		{
			ptr[i] = *(str + i);
		}
		ptr[i] = '\0';

	}
	return (ptr);
}
