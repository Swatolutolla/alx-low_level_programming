#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = '0';
	int j = '0';

	for ( ; i <= 56; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			if (j == i)
			{
				j = j + 1;
			}
			putchar(i);
			putchar(j);
			if (i <= 55)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}

