/**
 * main - display 1 to 100
 * Description: display 1 to 10 with x5 = buzz & x3 = fizz & both = FizzBuzz
 * Return: 0
*/
#include <stdio.h>

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0 && i != 100)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i == 100)
		{
			printf("Buzz");
			break;
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
