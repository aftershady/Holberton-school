#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print a structure
 * @d: pointer on structure
 * Description: change value if coponants of structure is null
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
