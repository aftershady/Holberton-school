#include <stdio.h>
#include <stdlib.h>
/**
 * main - add arguments if they are positive numbers
 * @argc: size of argv
 * @argv: array of arguments
 * Description : if numbers are positive print the result
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, j;
	int positif = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (0);
			}
		}
		positif += atoi(argv[i]);
	}
	printf("%d\n", positif);
	return (0);
}
