#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the result of argument * argument
 * @argc: size of argv
 * @argv: array of arguments
 * Description: print Error if arguments after exe != 2 or print multiplaction
 * Return: 0;
 */
int main(int argc, char **argv)
{
	int n = atoi(argv[1]) * atoi(argv[2]);

	if (argc != 3)
	printf("Error\n");
	else
	printf("%d\n", n);

	return (0);
}
