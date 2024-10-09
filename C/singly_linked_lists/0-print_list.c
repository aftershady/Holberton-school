#include <stdio.h>
#include "lists.h"

/**
 * print_list - print a singly linked list
 * @h: pointer on first node
 * Description: check if nod is empty, if not print the content of the
 * node and check if the str in the node have string in it, if not print
 * (nil)
 * Return: number of nodes print
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		count++;
	}
	return (count);
}
