#include "3-calc.h"
#include "string.h"

/**
 * get_op_func - empty pointer of function
 * @s: char of operator
 * Description: check if s is an operateur
 * Return: adress of function or null;
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i <= 7)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
