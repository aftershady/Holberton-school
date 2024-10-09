#include <unistd.h>
#include "main.h"
/**
 * print_line - print _ x times
 * @n:	number
 * Description: print a underscore x times
 * Return: n
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
