#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenate 2 string in another
 * @s1: string 1
 * @s2: string 2
 * Description: take 2 string and copy char by char
 * Return: null or new_string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *array;


	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	array = malloc(sizeof(char) * (sizeof(s1) - 1) + sizeof(s2));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		array[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; i++, j++)
	{
		array[i] = s2[j];
	}
	array[i] = '\0';

		return (array);
}
