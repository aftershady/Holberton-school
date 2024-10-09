#include <unistd.h>
#include "main.h"
/**
 * print_most_numbers - putchar numbers with exept
 * Description: printf numbers from 0 to 9 exept 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		if (i == '2' || i == '4')
		{
			i++;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

