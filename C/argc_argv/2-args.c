#include <stdio.h>
/**
 * main - print all arguments 1 by one
 * @argc: size of argv
 * @argv: array of arguments
 * Description: print all arguments separate by a line return
 * Return: 0;
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i != argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
