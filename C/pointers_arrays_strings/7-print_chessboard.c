#include "main.h"
/**
 * print_chessboard - print 2d array
 * @a: pointer of array;
 * Description: print 2d array of 8 rows and 8 columns
 * Return: a
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i != 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
		_putchar(a[i][j]);
		}
		j = 0;
		_putchar('\n');
	}
}
