#include "main.h"
/**
* _abs - gives the absolute value of a function
*
* @i: will be the value to calculate the absolute
* Return: Always 0
*/
int _abs(int i)
{
		if (i < 0)
		{
			i = i * -1;
		}
		else
		{
			i = i * 1;
		}
		return (i);
}
