#include <stdarg.h>
/**
 * sum_them_all - do the sum of integers with variadic function
 * @n:numbers of int
 * Description: take the number of in on reference to sum the values
 * Return: the sum of all integers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += (int) va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
