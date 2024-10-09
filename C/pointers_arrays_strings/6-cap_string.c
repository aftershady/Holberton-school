/**
 * cap_string - caps lowercase
 * @str: string
 * Description: caps lower case after punctuation
 * Return: str
 */
char *cap_string(char *str)
{
	int i, j, size;

	for (size = 0; str[size] != '\0'; size++)
	{}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (str[i] == 'a' + j)
			{
				/*missing condition not find*/
			}
		}
		j = 0;
	}
	return (str);
}
