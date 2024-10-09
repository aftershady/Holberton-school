#include "main.h"
/**
 * puts2 - print 1 char out of 2
 * Description: print the hal of a sting strating by the first char
 * @str: string
 * Return: 0
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		if (str[i] != '\0')
		{
			i++;
		}
	}
	_putchar('\n');
}
