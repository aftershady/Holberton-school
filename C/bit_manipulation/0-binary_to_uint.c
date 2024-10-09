#include <stdio.h>
/**
 * binary_to_uint - convert binary in unsigned int
 * @b: string of binary
 * Description: convert each character of the string and add the result
 * int the result variable
 * Return: the result of conversion
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}
	if (*b == '0' && *(b + 1) == '\0')
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b == '0')
		{
			result = result * 2;
		}
		else if (*b == '1')
		{
			result = result * 2 + 1;
		}
		else
		{
			return (0);
		}
		b++;
	}

	return (result);
}

