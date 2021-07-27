#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - function that prints anything
 * @format: string to print that also has conversion characters
 * @...: arguments to print.
 * Return: length of the string or -1 if error
 */

int _printf(const char *format, ...)
{
	int i = 0, length = 0, special;
	va_list arg;
	int (*f)(va_list);

	va_start(arg, format);
	special = special_cases(format, arg);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (special == 1)
			{
				i += 3;
				length += 2;
			}
			else if (special == (-1))
				return (-1);
			else
			{
				f = get_format(&format[i]);
				if (f != NULL)
				{
					length += f(arg);
					i += 2;
					continue;
				}
			}
		}
		else
			length += _putchar(format[i]);
		i++;
	}
	va_end(arg);
	return (length);
}
