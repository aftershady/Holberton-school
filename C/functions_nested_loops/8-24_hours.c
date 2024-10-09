#include <unistd.h>
#include "main.h"
/**
*jack_bauer - countdown
*Description: countdown from 00:00 to 23:59
*Return: void
*/
void jack_bauer(void)
{
	int h10 = 0;
	int h = 0;
	int m10 = 0;
	int m = 0;
	int i = 0;
	int j = 0;
	while (j < 24)
	{
		for (; i < 60; i++)
		{
			_putchar(h10 + '0');
			_putchar(h + '0');
			_putchar(':');
			_putchar(m10 + '0');
			_putchar(m + '0');
			_putchar('\n');

			if (m == 9)
			{
				m = 0;
				m10++;
			}
			else
			{
				m++;
			}
		}

		if (h == 9)
		{
			m10 = 0;
			m = 0;
			h = 0;
 			h10++;
 		}
		else
		{
			m10 = 0;
			m = 0;
			h++;
		}
		i = 0;
		j++;

	}
}
