#include "main.h"
/**
** _isalpha - checkes if a charcter c is to alphabets
*
* @c: is the character to be checked
* Return: Always Success
*/
int _isalpha(int c)
{

		if ((c >= 97  && c <= 122) || (c >= 65 && c <= 90))
		{
			c = 1;
		}
		else
		{
			c = 0;
		}
		return (c);
}
