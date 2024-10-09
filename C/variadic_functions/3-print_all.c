#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - Prints any type of arguments based on the format string.
 * @format: value to print
 * Description: check with the help of a structure if a char in the
 * format string correspond to a type and if it does, print the type
 * with the help of a pointer function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	int i = 0;
	int j = 0;
	va_list list;
	void (*type_of_function)(va_list);

	type check_type[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	va_start(list, format);
	while (format && format[i] != '\0')
	{
		j = 0;
		while (check_type[j].letter_in_string != 0)
		{
			if (format[i] == check_type[j].letter_in_string)
			{
				printf("%s", separator);
				type_of_function = check_type[j].print_type;
				type_of_function(list);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
/**
 * print_char - Prints a character.
 * @list: A va_list containing the character to print.
 *
 * Description: This function retrieves a character from the va_list
 * and prints it.
 *
 * Return : nothing
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_integer - Prints an integer.
 * @list: A va_list containing the integer to print.
 *
 * Description: This function retrieves an integer from the va_list
 * and prints it.
 *
 * Return : nothing
 */
void print_integer(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_float - Prints a float.
 * @list: A va_list containing the float to print.
 *
 * Description: This function retrieves a float from the va_list
 * and prints it.
 *
 * Return : nothing
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_string - Prints a string.
 * @list: A va_list containing the string to print.
 *
 * Description: This function retrieves a string from the va_list
 * and prints it.
 * If the string is NULL, "(nil)" is printed instead.
 *
 * Return : nothing
 */
void print_string(va_list list)
{
	char *str = va_arg(list, char *);

	if (str == NULL)
	{
		str = "(nil)";
	}
	printf("%s", str);
}
