#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>

/**
 * struct type - search the type of a function
 * @letter_in_string: will receive a char
 * @print_type: function pointer on funtion who call variadic list
 * Description: take a char and a function pointer, the char will
 * contain the char in the string in format of the va_list and the
 * function pointer will return the good function in the pointer of
 * function in the main
 */
typedef struct type
{
char letter_in_string;
void (*print_type)(va_list);
} type;

void print_all(const char * const format, ...);
void print_char(va_list list);
void print_integer(va_list list);
void print_float(va_list list);
void print_string(va_list list);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif
