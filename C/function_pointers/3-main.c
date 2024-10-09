#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - do singles operations with simples operators
 * @argc: number of arguments
 * @argv: array of strings
 * Description: check if arguments are valid, tansform them in intergers
 * then calculate them
 * Return: nohing printf only the result
 */
int main(int argc, char **argv)
{
int num1, num2, result;
int (*ptr)(int, int);


if (argv[2][1] != '\0' || argc != 4
|| strspn(argv[1], "0123456789") != strlen(argv[1])
|| strspn(argv[3], "0123456789") != strlen(argv[3]))
{
	printf("Error\n");
	exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

ptr = get_op_func(argv[2]);

result = ptr(num1, num2);

printf("%d\n", result);

return (0);
}
