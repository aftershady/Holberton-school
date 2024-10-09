/**
 * leet - replace char by numbers
 * @str: string
 * Description: replace char by their equivalent numbers
 * Return: str
 */
char *leet(char *str)
{
	int i, j;
	char tab1[6] = {'a', 'e', 'o', 't', 'l'};
	char tab2[6] = {'A', 'E', 'O', 'T', 'L'};
	char tab[6] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if (str[i] == tab1[j] || str[i] == tab2[j])
			{
				str[i] = tab[j];
			}
		}
	}
	return (str);
}
