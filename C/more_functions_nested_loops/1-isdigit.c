#include <unistd.h>
#include "main.h"
/**
 * _isdigit - digit checker
 * @c: number
 * Description: check if the digit si 0 to 9 or not
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isdigit(int c)
{
if (c >= '0' &&  c <= '9')
{
	return (1);
}
else
{
	return (0);
}
}
