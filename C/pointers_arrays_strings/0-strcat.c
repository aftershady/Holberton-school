/**
*_strcat - concatenate 2 string
*@dest: first string
*@src: second string
*Description: copy the second string at the end of the first one
*Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);

}


