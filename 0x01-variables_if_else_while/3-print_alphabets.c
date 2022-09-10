#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	char b = 'A';
		do {
			putchar(a);
			a++;
		} while (a < 123);
	do {
		putchar(b);
		b++;
	} while (b < 91);
		putchar('\n');
	return (0);
}
