#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - do an addition
 * @a: number 1
 * @b: number 2
 * Description: do the operation
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - do a substraction
 * @a: number 1
 * @b: number 2
 * Description: do the operation
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - do a multiplication
 * @a: number 1
 * @b: number 2
 * Description: do the operation
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - do a division if numbers are not = to 0
 * @a: number 1
 * @b: number 2
 * Description: do the operation
 * Return: result
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a / b);
}
/**
 * op_mod - do a division if numbers are not = to 0
 * @a: number 1
 * @b: number 2
 * Description: do the operation
 * Return: modulo
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a % b);
}
