#include <string.h>
#include "main.h"
/**
* puts2 - print even string
*
*@str: is the string to be evenly printed
* Return Always Success
*/
void puts2(char *str)
{
	int i = strlen(str);
	int j = 0;

	do {
		_putchar(str[j]);
		j = j + 2;
	} while (j < i);
}
