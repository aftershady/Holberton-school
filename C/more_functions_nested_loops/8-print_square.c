#include <unistd.h>
#include "main.h"
/**
 * print_square - square of #
 * @size : size of square
 * Description: square of # with x rows and cols
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
