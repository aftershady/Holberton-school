/**
 * _strchr - search a char in string
 * @s: string
 * @c: char to find
 * Description: search char in string and return the rest
 * Return: s or null
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == '\0')
{
return (0);
}
return (s);
}