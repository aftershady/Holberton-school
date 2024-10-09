#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * strcpy - copy string in another
 * @dest: string dest
 * @src: string to cpy
 * Return: string dest
 */
char *strcpy(char *dest, const char *src)
{
	char *d;

	d = dest;
	while ((*d++ = *src++))
	{
		;
	}
	return (dest);
}

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
 * add_node - create a node
 * @head: pointer on struct pointer
 * @str: string to copy
 * Description: create a node, allocate memory to it and copy in the struct of
 * the node the str and the lenght of the str, make the head point on the new
 * node and the next pointer on the head
 * Return: adresse of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
/*add a ne struct*/
list_t *new;

new = malloc(sizeof(list_t));
if (!new)
{
	return (NULL);
}
/*copy data in new struct*/
new->len = strlen(str);
/*aloc memory for the string*/
new->str = malloc(new->len * (sizeof(char) + 1));
if (!new->str)
{
	free(new);
	return (NULL);
}
/*copy string in the struct string*/
strcpy(new->str, str);
/*copy adress of next node in the next pointer*/
new->next = *head;

*head = new;

return (new);
}
