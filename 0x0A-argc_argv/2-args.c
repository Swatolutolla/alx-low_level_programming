#include <stdio.h>
/**
* main - entry point
*
*@argc: is the counter
*@argv: is the array of strings
* Return: Always 0 (Success)
*/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
