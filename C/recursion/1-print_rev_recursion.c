#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse
 * @s: string
 * Description: print in reverse with putchar and recursion
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
