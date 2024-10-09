/**
 * factorial - calulate factorial
 * @n: number
 * Description: decrement the number multiplied by n with recursion
 * Return: n * (n-1) util n = 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	/*factorial of n*/
	return (n * factorial(n - 1));

}
