#include "main.h"
#include <string.h>
/**
* rev_string - reverse the arrangement of a string
*
*@s: is the point of the string to be rearrangened
* Return: Always Success
*/
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int tmp;

	i = strlen(s);
	while (i > j)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		i--;
		j++;
	}
	_putchar('\n');
}
