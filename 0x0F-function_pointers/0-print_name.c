#include <stdio.h>
#include "function_pointers.h"
/**
* print_name - prints a name
*
*@name: is the name to be printed
*@f: is the function pointer
*Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
