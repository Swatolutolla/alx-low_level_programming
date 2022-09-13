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
	int k = '0';

	for ( ; i <= 55; i++)
	{
		for (j = i + 1; j <= 56; j++)
		{
			for (k = 2 + i; k <= 57; k++)
			{

			if (j == i || j == k || i == k)
			{
				k = k + 1;
			}
			putchar(i);
			putchar(j);
			putchar(k);
			if (i <= 54)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}

