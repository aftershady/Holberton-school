#include <unistd.h>
#include "main.h"

/**
*_islower - capital checker
*@c: letter
*Description: check if your letter is a capital or not
*Return: 0 if capital 1 if not
*/
int _islower(int c)
{
int i = 0;
while (i <= 25)
{
	if (c == 'a' + i)
	{
	return (1);
	}
	i++;
}
return (0);
}
