#include "main.h"
/**
* swap_int - swap the vaules of two integer varaibles
*
*@a: is the pointer of the first integer
*@b: is the pointer of the seconf integer
*: Return: Always 0
*/
void swap_int(int *a, int *b)
{
	int i = *a;
	int j = *b;

	*a = j;
	*b = i;
}
