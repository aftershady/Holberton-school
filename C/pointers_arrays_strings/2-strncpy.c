/**
 * _strncpy - copy n char
 * @dest: receive the string
 * @src: string
 * @n: number of bytes
 * Description: copy the string in a array of 98 char n times
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int src_size = 0;
int dest_size = 0;
int i = 0;

/*size of src*/
while (src[src_size] != '\0')
{
	src_size++;
}
/*size of dest*/
while (dest[dest_size] != '\0')
{
	dest_size++;
}
/*strcpy*/
while (i != dest_size)
{
	if (i >= n)
	{
		dest[i] = '-';
	}
	else
	{
		if (src_size < n)
		{
		dest[i] = 0;
		}
		dest[i] = src[i];
	}
	i++;
}
dest[i] = '\0';
return (dest);
}
