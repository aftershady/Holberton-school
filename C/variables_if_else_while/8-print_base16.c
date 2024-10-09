/**
*main - return 0
*Description: 'display numbers from 0 to 9'
*Return: 0
*/
#include <stdio.h>
int main(void)
{
int i = 0;
char c = '0';
while (i != 17)
{
if (i == 10)
{
c = 'a';
i++;
}
else
{
putchar(c);
c++;
i++;
}
}
putchar('\n');
return (0);
}
