#include "lists.h"

/**
 * get_dnodeint_at_index - get the index node of the list and return it
 * @head: pointer on node send
 * @index: n* of node
 * Description: check if the node send is really the first then go to the
 * index number
 * Return: the node pointed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head != NULL)
	{
		while (head != NULL && head->prev != NULL)
		{
			head = head->prev;
		}
		while (head != NULL || counter < index)
		{
			if (counter == index)
			{
				return (head);
			}
			head = head->next;
			counter++;
		}
	}
	return (head);
}
