#include <stdio.h>
/**
 * main - print the last shell argument
 * @argc: size of argv
 * @argv: array of arguments
 * Description: print prog name or last argument
 * Return: 0;
 */
int main(int argc, char *argv[])
{
printf("%s\n", argv[argc - 1]);
return (0);
}
