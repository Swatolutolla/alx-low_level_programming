#include <stdlib.h>
#include "function_pointers.h"
/**
* int_index - searches for an integer.
*
*@array: is an array to be searched
*@size: is the size of the array
*@cmp: is the pointer to the function
* Return: Always Integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int j;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);
		if (j != 0)
		{
			return (i);
		}
	}
	return (-1);
}
