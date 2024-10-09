/**
*_strncat - concatenate 2 string wit n bytes
*@dest: first string
*@src: second string
*@n: number of the lenght of the second string
*Description: copy the second string at the end of the first one
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
