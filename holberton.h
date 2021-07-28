#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct all_formats - struct all_formats
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
int print_x(va_list arg);
int print_X(va_list arg);
int print_u(va_list arg);
int print_rev(va_list r);
int print_octal(va_list o);
int print_mod(va_list arg);
int print_root(va_list arg);
int (*get_format(const char *format))(va_list arg);
int _printf(const char *format, ...);
int special_cases(const char *format, va_list arg);
int _putchar(char c);

#endif /* HOLBERTON_H */
