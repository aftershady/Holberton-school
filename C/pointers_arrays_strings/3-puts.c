#include "main.h"
/**
 * _puts - display a string
 * Description: take a string on in and display it with new line at the end
 * @str: string
 * Return: 0;
*/
void _puts(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter++;
	}
	_putchar('\n');
}
