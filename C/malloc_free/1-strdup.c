#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy string in another memory place
 * @str: string
 * Description: take str, allow same memory size and copy it
 * Return: new string or null
 */
char *_strdup(char *str)
{
	int i;
	int str_size = 0;
	char *temp;

	while (str[str_size])
	{
		str_size++;
	}

	temp = malloc(sizeof(char) * str_size + 1);
	if (temp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < str_size; i++)
	{
		temp[i] = str[i];
	}
	temp[i] = '\0';

	return (temp);
}
