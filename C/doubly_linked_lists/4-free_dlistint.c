#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - free the doubly linked list
 * @head: pointer to the first structure of the list
 * Description: copy the adresse of the first structure in temp pointer
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

while (head != NULL)
{
	temp = head;
	head = head->next;
	free(temp);
}
}
