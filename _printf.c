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
	int i = 0, flag = 0;
	va_list arg;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 2] == '%')
				return (-1);
			if (format[i + 1] == '%')
			{
				_putchar('%');
				flag++;
				i++;
			}
			else
			{
				f = get_format(&format[i]);
				if (f != NULL)
				{
					f(arg);
					i += 2;
					continue;
				}
				else
					return (-1);
			}
		}
		else
			_putchar(format[i]);
		i++;
	}
	va_end(arg);
	if (flag == 1)
		return (i - 1);
	return (i);
}
