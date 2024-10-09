#include <unistd.h>
#include "main.h"
/**
*print_sign - pair or impair
*@n: number
*Description: return a char and a
*Return: 1 or 0 or -1
*/
int print_sign(int n)
{
if (n % n == 0 && n > 0)
{
_putchar('+');
return (1);
}
else if (n % n == 0 && n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}
return (0);
}
