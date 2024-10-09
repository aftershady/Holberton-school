/**
*main - return 0
*Description: ''
*Return: 0
*/

#include <stdio.h>

int main(void)
{
char alphabetlow = 'a';
char alphabetupp = 'A';
char lr = '\n';
int i = 0;
while (i != 26)
{
putchar(alphabetlow);
alphabetlow++;
i++;
}
i = 0;
while (i != 26)
{
putchar(alphabetupp);
alphabetupp++;
i++;
}
putchar(lr);
return (0);
}
