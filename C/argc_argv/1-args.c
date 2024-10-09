#include <stdio.h>
/**
 * main - number of arguments
 * @argc: size of argv
 * @argv: array of arguments
 * Description: print number of arguments after the name of exe
 * Return: 0;
 */
int main(int argc, char **argv)
{
	if (*argv[0] == '\0')
	printf("0\n");
	else
	printf("%d\n", argc - 1);
	return (0);
}
