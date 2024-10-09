/**
 * _strlen - size of string
 * Description: calculate the size of a string
 * @s: string
 * Return: size in integer format
*/
int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
	counter++;
	}
	return (counter);
}
