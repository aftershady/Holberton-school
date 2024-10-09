#include <stdio.h>
#include "lists.h"

/**
 * list_len - count number of nodes in singly linked list
 * @h: pointer on first node
 * Description: check if nod is empty, if not count the number of nodes
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
