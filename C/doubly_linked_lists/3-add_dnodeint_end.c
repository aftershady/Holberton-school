#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - add node to the end of a doubly linked list
 * @head: pointer on first node
 * @n: number who will navigate in list
 * Description : create a new nod, allocate memory to it and ad is at the
 * end of the list
 * Return: adresse of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
/*add a new struct*/
dlistint_t *new;
dlistint_t *temporary;

new = malloc(sizeof(dlistint_t));
if (!new)
{
	return (NULL);
}
new->n = n;
new->next = NULL;

if (*head == NULL)
{
	new->prev = NULL;
	*head = new;
}
else
{
	temporary = *head;
	while (temporary->next != NULL)
	{
		temporary = temporary->next;
	}
	temporary->next = new;
	new->prev = temporary;
}

return (new);
}
