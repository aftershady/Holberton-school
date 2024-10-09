#include "main.h"
/**
 * puts_half - print half of string
 * Description: print the half of a sting strating by the middle
 * @str: string
 * Return: 0
*/
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		i = (i + 1) / 2;
	}
	else
	{
		i = i / 2;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
