#include <unistd.h>
#include "main.h"
/**
*print_last_digit - print number
*@n: number
*Description: return the last number of a number
*Return: last number
*/
int print_last_digit(int n)
{
int ln = n % 10;

if (n < 0)
{
ln = ln * -1;

}
_putchar('0' + ln);
return (ln);

}
