#include <stdlib.h>
#include "dog.h"
/**
* free_dog - free dogs
* @d: pounter to the Dog
* Return: Always Success
*/
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
