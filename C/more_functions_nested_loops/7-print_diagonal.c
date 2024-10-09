#include <unistd.h>
#include "main.h"
/**
 * print_diagonal - print diag
 * @n: number of diag
 * Description: print diag with n-1 spaces
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 2; j <= i; j++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
