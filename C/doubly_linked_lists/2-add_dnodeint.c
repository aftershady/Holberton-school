#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add new node before the head
 * @head: pointer on first node
 * @n: number who will navigate in list
 * Description : create a new nod, allocate memory to it and ad is at the
 * begining of the list
 * Return: adresse of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t  *new;

if (head == NULL)
{
	return (*head);
}

new = malloc(sizeof(dlistint_t));
if (!new)
{
	return (NULL);
}

new->n = n;
new->prev = new;
new->next = *head;
new->prev = new;
*head = new;

return (new);
}
