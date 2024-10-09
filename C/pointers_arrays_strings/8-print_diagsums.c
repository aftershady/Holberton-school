#include <stdio.h>
/**
 * print_diagsums - summ of 2 diagonals
 * @a: pointer to array
 * @size: size of the 2d array
 * Description: prints sum of the two diagonals of a square matrix of int
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int counter_1 = 0;
	int counter_2 = 0;

	for (i = 0; i < size ; i++)
	{
		counter_1 += a[i * (size + 1)];
	}
	printf("%d, ", counter_1);

	for (i = 0; i < size; i++)
	{
		counter_2 += a[(i + 1) * (size - 1)];
	}
	printf("%d\n", counter_2);
}
