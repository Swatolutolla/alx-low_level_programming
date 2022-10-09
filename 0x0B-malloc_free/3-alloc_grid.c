#include <stdlib.h>
#include "main.h"
/**
* alloc_grid -returns a pointer to a 2 dimensional array
*
*@width: - the width of the array
*@height: height of the array
* Return: Always a double poiter
*/
int **alloc_grid(int width, int height)
{
	int j;
	int i;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(width * height * sizeof(int));
	if (arr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(*(arr + i) + j) = 0;
		}
	}
	return (arr);
}
