#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
*
*@argc: is the counter of the arguments
*@argv: is the ponit to the string of arguments
* Return: Always 0 (Success)
*/
int main(int argc, char **argv)
{
	int i, sum, n;
	char *f;

	sum = 0;
	n = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &f, 10);
		if (*f)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += n;
		}
		printf("%d\n", sum);
	}
	return (0);
}
