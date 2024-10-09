/**
 * _strstr - check in string is in another
 * @haystack: frist string
 * @needle: second string
 * Description: if second string is in another
 * Return: reste of first string
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; haystack[i] == needle[j]; j++)
{
i++;
if (needle[j] == '\0')
{
return (&haystack[i]);
}
}
}
return (0);
}
