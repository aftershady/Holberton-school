#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - create a 2d array initialized to 0
 * @width: widht of the array
 * @height: height of the array
 * Description: initialise the height first then the width
 * Return: if error free space alloced and null, if ok array2d
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array2d;

	if (height == 0 || width == 0)
	{
		return (NULL);
	}

	array2d = malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		array2d[i] = malloc(width * sizeof(int));
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array2d[i][j] = 0;
			if (array2d[i] == NULL)
			{
				for (j = 0; j < i; j++)
				{
				free(array2d[j]);
				}
				free(array2d);
				return (NULL);
			}
		}
		j = 0;
	}
	return (array2d);
}
