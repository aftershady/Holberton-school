#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a specified node
 * @head: pointer to the node given
 * @index: node to point
 * Description: run the list to the start, go to the index node and
 * delete it
 * Return: 0 if succes, -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int check_index = 0;
dlistint_t *temp;

if (*head == NULL)
	return (-1);

temp = *head;
while (temp->prev != NULL)
{ temp = temp->prev; }
/*check if the node is the first node*/

while (temp->next != NULL && check_index < index)
{
	temp = temp->next;
	check_index++;
}
	/* go at the index or the end of list*/
	if (check_index != index && index != 0)
		return (-1);
	else if (temp->prev != NULL)
		temp->prev->next = temp->next;
	else
		*head = temp->next;

	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);
	return (0);
}

