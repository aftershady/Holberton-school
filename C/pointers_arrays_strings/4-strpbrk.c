/**
 * _strpbrk - search similar char
 * @s: first string
 * @accept: second string
 * Description: search similar char and return the reste of string
 * Return: s
*/
char *_strpbrk(char *s, char *accept)
{
int i;

for (; *s != '\0'; s++)
{
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
return (s);
}
}
i = 0;
}
return (0);
}