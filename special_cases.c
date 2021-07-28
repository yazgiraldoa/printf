#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * special_cases - function that checks for special cases
 * @format: string to be evaluated
 * @arg: arguments to print.
 * Return: -1 if error or flag to validate 4 %.
 */

int special_cases(const char *format, va_list arg)
{
	int i;
	(void)arg;

	if (format == NULL)
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%' && format[i + 2] == '%' && format[i + 3] != '%')
			{
				if (format[i + 3] == 'c' || format[i + 3] == 's' ||
					format[i + 3] == 'd' || format[i + 3] == 'i' ||
					format[i + 3] == 'u' || format[i + 3] == 'x' ||
					format[i + 3] == 'X' || format[i + 3] == 'R' ||
					format[i + 3] == 'r' || format[i + 3] == 'o')
					continue;
				return (-1);
			}
			else if (format[i + 1] == '%' && format[i + 2] == '%' &&
					 format[i + 3] == '%')
			{
				i += 4;
			}
		}
	}
	return (0);
}
