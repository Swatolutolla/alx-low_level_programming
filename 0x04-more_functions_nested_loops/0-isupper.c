#include "main.h"
/**
* _isupper - checks if a charactewr is upper or lower case
*
*@c: is the character to be checked
* Return: Always Success
*/
int _isupper(int c)
{
		if (c > 64 && c < 91)
		{
			c = 1;
		}
		else
		{
			c = 0;
		}
		return (c);
}
