#include <stdio.h>
/**
 * print_name - select how to print the name using funtion pointer
 * @name: string
 * @f: pointer to function
 * Description: initialise function with pointer to a function
 * in his parameters
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
	{
	f(name);
	}
}
