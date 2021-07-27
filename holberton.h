#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct all_formats - structure to print types
 * @type: format
 * @f: function associated to format
 */

typedef struct all_formats
{
	char *type;
	int (*f)(va_list arg);
} format_t;

int print_i(va_list arg);
int print_s(va_list arg);
int print_c(va_list arg);
int (*get_format(const char *format))(va_list arg);
int _printf(const char *format, ...);
int _putchar(char c);

#endif /* HOLBERTON_H */
