/**
*main - return 0
*Description: 'display numbers from 0 to 9'
*Return: 0
*/
#include <stdio.h>
int main(void)
{
int i = 0;
int c = 48;
while (i != 10)
{
putchar(c);
if (i == 9)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
c++;
}
i++;
}
return (0);
}
