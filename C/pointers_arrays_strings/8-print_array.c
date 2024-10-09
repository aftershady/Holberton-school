#include "main.h"
#include <stdio.h>
/**
 * print_array - print n cases
 * Description: print n definded cases of the array
 * @a: pointer to array of int
 * @n: number of case to display
 * Return: 0
*/
void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		while (a[i] != a[n])
		{
			printf("%d", a[i]);
			i++;
			if (a[i] != a[n])
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
