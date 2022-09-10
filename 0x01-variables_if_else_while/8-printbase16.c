#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = '0';

	do {
		putchar(a);
			a++;
			if (a == 58)
			{
				a = a + 39;
				continue;
			}
	} while (a < 103);
	putchar('\n');
	return (0);
}
