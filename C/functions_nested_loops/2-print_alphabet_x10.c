#include <unistd.h>
#include "main.h"

/**
*print_alphabet_x10 - Print the alphabet x10
*Description: This function prints the alphabet in lowercase 10 times.
*Return: void
*/
void print_alphabet_x10(void)
{
int i = 0;
int j = 0;
int c = 97;
while (j < 10)
{
while (i <= 25)
{
_putchar(c);
c++;
i++;
}
_putchar('\n');
i = 0;
c = 97;
j++;
}
}
