#include <stdio.h>
/**
 * array_iterator - create a loop on function pointer on array
 * @array: array of int
 * @size: size of array
 * @action: function pointer
 * Description: do a loop with a function pointer to display an array
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL || action != NULL)
	{
		while (i < size)
		{
		action(array[i]);
		i++;
		}
	}
}
