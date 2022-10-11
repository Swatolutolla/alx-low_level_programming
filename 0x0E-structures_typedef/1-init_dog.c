#include "dog.h"
#include <stdio.h>
/**
* init_dog - initializes the structure dig
* @d: is the objectvif the structure d
* @name: is the name of the dog
* @age: is the age of the dog
* @owner: is the owner of the dog
* Return: Always Success
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
