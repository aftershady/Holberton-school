#include "lists.h"
/**
 * sum_dlistint - give the summ of all nodes of a list
 * @head: node of the list given
 * Description: take the node given and verify if it's the first one,
 * if it is, do the summ of all the numbers and return it
 * Return: the summ of all numbers + the number in the last node
 */
int sum_dlistint(dlistint_t *head)
{
	int summ = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head->prev != NULL)
	{
		head = head->prev;
	}

	while (head->next != NULL)
	{
		summ = summ + head->n;
		head = head->next;
	}

	return (summ + head->n);
}
