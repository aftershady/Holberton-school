#include <unistd.h>
#include "main.h"

/**
*_isalpha - capital checker
*@c: letter
*Description: if you letter is captial or lower case return 1
*Return: 1 if capital or lowar case or 0
*/
int _isalpha(int c)
{
int i = 0;
while (i <= 25)
{
	if (c == 'a' + i || c == 'A' + i)
	{
	return (1);
	}
	i++;
}
return (0);
}
