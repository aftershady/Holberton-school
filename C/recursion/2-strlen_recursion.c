#include "main.h"
/**
 * _strlen_recursion - return size of string
 * @s: string
 * Description: stack size of string in integer with recursion
 * Return: 1 + last incrementation or 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
