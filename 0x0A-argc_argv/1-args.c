#include <stdio.h>
/**
* main - entry point
*
*@argc: command line argument counter
*@argv: command line argument string array
* Return: Always 0 (Success)
*/
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
