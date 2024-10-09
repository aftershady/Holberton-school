#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free the singly linked list and th str in it
 * @head: pointer to the first structure of the list
 * Description: copy the adresse of the first structure in temp pointer
 * Return: nothing
 */
void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
	temp = head;
	head = head->next;
	free(temp->str);
	free(temp);
}
}
