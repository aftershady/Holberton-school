#include "main.h"
/**
 * print_rev - display a string in reverse
 * Description: print string in reverse with new line at the end
 * @s: string
 * Return: 0
*/
void print_rev(char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	size--;
	while (size >= 0)
	{
		_putchar(s[size]);
		size--;
	}
	_putchar('\n');
}
