/**
 * swap_int - swap numbers
 * Description: swap 2 values in integers
 * @a: pointer to variable a
 * @b: pointer to variable b
 * Return: void
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
