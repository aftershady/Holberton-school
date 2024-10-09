#include <stdlib.h>
/**
 * _calloc - create an array with unkwown value initialized to 0
 * @nmemb: size of array
 * @size: size of a char
 * Description: error works only with char value
 * Return: the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *array;

if (nmemb == 0 || size == 0)
{
	return (NULL);
}

array = malloc(size * nmemb);
if (array == NULL)
{
	return (NULL);
}
for (i = 0; i <= (size * nmemb) - 1; i++)
{
	array[i] = 0;
}
return (array);
}
