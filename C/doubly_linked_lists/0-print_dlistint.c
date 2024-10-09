#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print a doubly linked list in the next way
 * @h: pointer to the first node
 * Description: print a list in the sens of next
 * Return: number of elements print
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
