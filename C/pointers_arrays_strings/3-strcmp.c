/**
 * _strcmp - compare 2 string
 * @s1: string 1
 * @s2: string 2
 * Description: check char one by one
 * Return: 0 if no difference, integer if difference
 */
int _strcmp(char *s1, char *s2)
{
int i, comp;

/*compare and return 0 if no difference*/
for (i = 0; s1[i] == s2[i]; i++)
{
	if (s1[i] == '\0')
	{
		return (0);
	}
}
/*return difference*/
if (s1[i] != s2[1])
{
comp = s1[i] - s2[i];
}

return (comp);
}
