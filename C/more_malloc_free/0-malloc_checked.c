#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - alloc memory to a pointer
 * @b: number of bytes
 * Description: take the value b initialize a pointer with it
 * Return: adress pointed byy a
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
