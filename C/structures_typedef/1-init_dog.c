#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * init_dog - take data and initialise a structure dog with name/age/owner
 * @d: initialisation structure of type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Description: take de caracteristiques of the dog then change it
 * Return: nothing
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
