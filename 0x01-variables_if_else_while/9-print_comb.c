#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int a = '0';
		for ( ; a < 58; a++)
			putchar(a);
		if (a < 57)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	return (0);
}
