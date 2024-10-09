/**
 * reverse_array - reverse array of int
 * @a: array
 * @n: sizeof(a)/sizeof(int)
 * Description: array of int reversed bytes by bytes
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i, j, t;

for (i = 0, j = n - 1; i < j; i++, j--)
{
t = a[j];
a[j] = a[i];
a[i] = t;
}
}
