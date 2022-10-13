#include <stdlib.h>
#include "function_pointers.h"
/**
* array_iterator - executes a function given as parameter
*
*@array: is the array
*@size: is the size of the array
*@action: function pointer
* Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size <= 0 || action == NULL || array == 0)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
