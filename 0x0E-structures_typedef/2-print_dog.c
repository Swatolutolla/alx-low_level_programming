#include <stdio.h>
#include "dog.h"
/**
* print_dog - prints the information of a dog
* @d: is the pointer to the dog
* Return: Always Sucess
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", (*d).name);
		}
		printf("Age: %f\n", (*d).age);
		if ((*d).owner == NULL)
		{
			printf("Owner: (nill)\n");
		}
		else
		{
			printf("Owner: %s\n", (*d).owner);
		}
	}
}

