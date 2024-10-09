#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - give the size of a string
 * @str: string
 * @size: size of the string
 * Return: size of th string
 */
int _strlen(char *str, int size)
{
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}
/**
 * _strcpy - copy string in another
 * @str: string to copy
 * @dest: destination
 * Return: nothing
 */
void _strcpy(char *str, char *dest)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		dest[i] = str[i];
	}
	dest[i] = '\0';
}
/**
 * new_dog - create a new structure with a pointer by using malloc
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner
 * Description: use malloc to allocate memory to a structure
 * Return: the adress of the new pointer on struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nsize = 0, osize = 0;
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	nsize = _strlen(name, nsize);
	osize = _strlen(owner, osize);

	new_dog->name = malloc(sizeof(char) * nsize + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * osize + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL); }

	_strcpy(name, new_dog->name);
	_strcpy(owner, new_dog->owner);

	new_dog->age = age;

	return (new_dog);
}
