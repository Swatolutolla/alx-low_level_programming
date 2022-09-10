#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'z';
		do {
			putchar(a);
			a--;
		} while (a > 96);
		putchar('\n');
	return (0);
}
