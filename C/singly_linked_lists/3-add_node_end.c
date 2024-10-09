#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * strlen - calculate the number of character in string
 * @str: string
 * Return: end of string - start of string
 */
size_t strlen(const char *str)
{
	const char *s = str;

	while (*s)
	{
	++s;
	}
	return (s - str);
}
/**
 * add_node_end - create a node at the end of the list
 * @head: pointer on struct pointer
 * @str: string to copy
 * Description: create a node, allocate memory to it and copy in the struct of
 * the node the str and the lenght of the str, copy the adress pointed by the
 * head in a temporary file, then defile the list using this pointer to add
 * the new node a the end
 * Return: adresse of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
/*add a ne struct*/
list_t *new;
list_t *temporary;

new = malloc(sizeof(list_t));
if (!new)
{
	return (NULL);
}
/*copy data in new struct*/
new->len = strlen(str);
/*aloc memory for the string and copy string in the struct string*/
new->str = strdup(str);
/*copy adress of next node in the next pointer*/
new->next = NULL;

if (*head == NULL)
{
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
}

return (new);
}
