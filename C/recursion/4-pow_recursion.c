/**
 * _pow_recursion - calculate x to the power of y
 * @x: number to multiply
 * @y: power
 * Description: stack the decrementation of y into recursion
 * Return: x*x y times
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);

	if (y == 0)
	return (1);

	if (y == 1)
	return (x);

	return (x * _pow_recursion(x, y - 1));
}
