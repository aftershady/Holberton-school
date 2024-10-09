#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - printf n of strings
 * @separator: string who separate strings
 * @n: number of print
 * Description: print string n times with variadic functions
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *str;
	va_list list;

	va_start(list, n);

	/*copy string of variadic in str*/
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, const char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
