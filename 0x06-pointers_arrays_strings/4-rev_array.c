#include "main.h"
/**
* reverse_array - reverse the element of an array
*
*@a: is the array name
*@n: is the number of element
* Return Always Success
*/
void reverse_array(int *a, int n)
{
	int tmp;
	int i;
	int j = (n - 1);
	int k = n / 2;

	for (i = 0; i < k; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	}
}
