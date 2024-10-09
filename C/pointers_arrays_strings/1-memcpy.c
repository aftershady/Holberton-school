/**
 * _memcpy - copy memory area
 * @dest: buffer_1
 * @src: buffer_2
 * @n: size of modifications
 * Description: copy n memory area of src to dest
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}