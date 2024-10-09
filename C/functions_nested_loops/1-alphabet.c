#include <unistd.h>
#include "main.h"

/**
*print_alphabet - Print the alphabet
*Description: This function prints the alphabet in lowercase.
*using the putchar function.
*Return: void
*/
void print_alphabet(void)
{
int i = 0;
int c = 97;
while (i != 26)
{
_putchar(c);
c++;
i++;
if (i == 26)
{
_putchar('\n');
}
}
}
