#include <stdlib.h>

/**
 * array_range - init an array of int with value from min to max
 * @min: minimal value
 * @max: maximale value
 * Description: init an array then copy min to max
 * Return: the array
 */
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	/*check if number + or - and malloc*/
	if (max >= 0)
	array = malloc(sizeof(int) * (max - min + 1));
	else
	array = malloc(sizeof(int) * (((max - min) * -1) + 1));
	/*if malloc fail*/
	if (array == NULL)
		return (NULL);
	/*put numbers in array*/
	for (i = 0; min <= max; i++, min++)
	{
		array[i] = min;
	}

	return (array);
}
