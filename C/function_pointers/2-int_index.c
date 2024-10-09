#include <stdio.h>
/**
 * int_index - check if integer match in array
 * @array: Array of integers.
 * @size: Size of the array.
 * @cmp: Comparison function pointer.
 * Desscription:  Searches for an integer in an array that matches a condition.
 * Return: case of array who match or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
	return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
		return (i);
		}
		i++;
	}
	return (-1);
}
