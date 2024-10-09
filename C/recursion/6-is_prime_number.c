/**
 * prime_number_calculation - calculate if n is primary
 * @n: number
 * @himself: / only by 1 or n if primary
 * Description: 2 conditions with recursion
 * Return: 1 if primary, 0 if not
 */
int prime_number_calculation(int n, int himself)
{
if (n % himself == 0 && n != himself)
{
	return (0);
}
if (himself * himself > n)
{
	return (1);
}
return (prime_number_calculation(n, himself + 1));
}
/**
 * is_prime_number - pirmary number checker
 * @n: number
 * Description: check if number is <= 1
 * Return: 0 or function to calculate if n is primary
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_number_calculation(n, 2));
}

