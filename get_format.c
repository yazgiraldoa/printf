#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * get_format - pointer of a function that gets the format
 * @format: string to be evaluated
 * Return: function that matches the format
 */

int (*get_format(const char *format))(va_list arg)
{
	unsigned int j, i = 0;

	format_t list[] = {
		{"d", print_i},
		{"i", print_i},
		{"s", print_s},
		{"c", print_c},
		{"x", print_x},
		{"X", print_X},
		{"u", print_u},
		{"o", print_octal},
		{"r", print_rev},
		{"R", print_root},
		{"%", print_mod},
		{NULL, NULL}};

	j = 0;

	while (list[j].type != NULL)
	{
		if (format[i + 1] == *list[j].type)
			return (list[j].f);

		j++;
	}
	return (list[j].f);
}
