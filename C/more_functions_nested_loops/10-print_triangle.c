#include <unistd.h>
#include "main.h"
/**
 * print_triangle - triangle rectancle of #
 * @size : size of triangle
 * Description: square of # with x rows and cols
 * Return: void
 */
void print_triangle(int size)
{
if (size > 0)
{
int i;
for (i = 0; i < size; i++)
{
int j;
for (j = 0; j < size - i - 1; j++)
{
_putchar(' ');
}
for (j = 0; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
