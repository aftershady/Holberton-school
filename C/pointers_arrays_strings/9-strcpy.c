#include "main.h"
/**
 * _strcpy - cpy a string in another
 * Description: copy string src into dest[98]
 * @dest: array of char
 * @src: unknown size string
 * Return: 0
*/
char *_strcpy(char *dest, char *src)
{
	int size = 0;
	int i = 0;

	while (src[size] != '\0')
	{
		size++;
	}
	while (i != size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
