/**
*main - return 0
*Description: ''
*Return: 0
*/

#include <stdio.h>

int main(void)
{
char alphabet = 'a';
char lr = '\n';
int i = 0;
while (i != 26)
{
	putchar(alphabet);
	alphabet++;
	i++;
}
putchar(lr);
return (0);

}

