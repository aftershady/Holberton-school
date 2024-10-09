#include "lists.h"


/**
 * dlistint_len - counter number of elements in doubly linked list
 * @h: pointer to the first node
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
