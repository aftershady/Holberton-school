#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenate 2 string in another, the 2nd have n size
 * @s1: string 1
 * @s2: string 2
 * @n: size of string 2
 * Description: take 2 string and copy
 * Return: null or new_string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int size_1 = 0;
	unsigned int size_2 = 0;
	char *array;

	if (s1 != NULL)
	{
	while (s1[size_1])
		{size_1++; }
	}
	if (s2 != NULL)
	{
		while (s2[size_2])
		{size_2++; }
	}
	if (n > size_2)
	{
		n = size_2;
	}
	array = malloc(sizeof(char) * (size_1 + n + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size_1; i++)
	{
		array[i] = s1[i];
	}
	for (j = 0; j < n && s2[j] != '\0'; i++, j++)
	{
		array[i] = s2[j];
	}
	array[i] = '\0';
	return (array);
}
