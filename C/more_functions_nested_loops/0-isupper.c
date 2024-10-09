#include <unistd.h>
#include "main.h"
/**
 * _isupper - caps checker
 * @c: character
 * Description: check if the char is caps or not
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isupper(int c)
{
if (c >= 'A' &&  c <= 'Z')
{
	return (1);
}
else
{
	return (0);
}
}
