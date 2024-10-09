#include <unistd.h>
#include "main.h"
/**
 * more_numbers - display numbers
 * Description: diplay number from 0 to 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
		_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
