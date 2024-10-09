/**
*main - return 0
*Description: ''
*Return: 0
*/

#include <stdio.h>

int main(void)
{
char alphabetlow = 'a';
char lr = '\n';
int i = 0;
while (i != 26)
{
if (alphabetlow == 'q' || alphabetlow == 'e')
{
alphabetlow++;
i++;
}
else
{
putchar(alphabetlow);
alphabetlow++;
i++;
}
}
putchar(lr);
return (0);
}
