#include "main.h"
/**
 * rev_string - reverse string
 * Description: reverse a string with temp file
 * @s: string
 * Return: 0
*/
void rev_string(char *s)
{
	int i = 0;
	int j;
	char t;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; i > j; j++, i--)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
}
