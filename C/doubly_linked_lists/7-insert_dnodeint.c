#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at the index positon of list
 * @h: pointer of a node send
 * @idx: node to reach
 * @n : number to add in the new node
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int check_idx = 0;
dlistint_t *new;
dlistint_t *temp;

if (*h == NULL)
	return (NULL);

temp = *h;
while (temp->prev != NULL)
{ temp = temp->prev; }
/*check if the node is the first node*/
new = malloc(sizeof(dlistint_t));
if (!new)
	return (NULL);
/*create newnode*/
while (temp->next != NULL && check_idx < idx - 1)
{
	temp = temp->next;
	check_idx++;
}
/* go at the index or the end of list*/
if (check_idx != idx - 1 && idx != 0)
{
	free(new);
	return (NULL);
}
new->n = n;
if (idx == 0)
{
new->next = *h;
new->prev = NULL;
*h = new;
}
else
{
new->next = temp->next;
new->prev = temp;
temp->next = new;
}
return (new);
}

