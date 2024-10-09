#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free the struc if she is not already empty
 * @d: pointer on structure
 * Description: free the 2 string and the pointer on structure
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
