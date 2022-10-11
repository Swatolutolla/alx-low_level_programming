#ifndef DOG_H
#define DOG_H

/**
* struct dog - takes dow the information of a dog
*  @name: is the nane if the Dog
* @age: is the age of the dog
* @owner: is the name of the owner of the Dog
* Description: thos takes the record of s dog and owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
