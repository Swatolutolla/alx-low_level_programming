#include "main.h"
/**
** _islower - checkes if a charcter c  is lower or upper case
*
* @c: is the character to ne checked
* Return: Always Success
*/
int _islower(int c)
{

		if (c >= 97  && c <= 122)
		{
			c = 1;
		}
		else
		{
			c = 0;
		}
		return (c);
}
