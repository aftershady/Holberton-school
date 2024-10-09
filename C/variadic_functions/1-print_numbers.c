#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers separate by a string
 * @separator: string separator
 * @n: number of int to be print
 * Description: use variadic to print int separated by a string
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i != n - 1 && separator != NULL)
		{
		printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
