#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0  (Success)
*/
int main(void)
{
	int chartype;
	int inttype;
	int longinttype;
	int longlonginttype;
	int floattype;

	printf("size of a char: %zu byte(s)\n", sizeof(chartype));
	printf("size of an int: %zu byte(s)\n", sizeof(inttype));
	printf("size of a long int: %zu byte(s)\n", sizeof(longinttype));
	printf("size of a long long int: %zu byte(s)\n", sizeof(longlonginttype));
	printf("size of a float: %zu byte(s)\n", sizeof(floattype));
	return (0);
}
