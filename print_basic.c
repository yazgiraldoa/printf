#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_i - function that prints an integer
 * @i: integer to print
 * Return: success is 0
 */

int print_i(va_list i)
{
	int a[10];
	int j, m, n, sum, count;

	n = va_arg(i, int);
	count = 0;
	m = 1000000000;
	a[0] = n / m;
	for (j = 1; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		for (j = 0; j < 10; j++)
			a[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			count++;
		}
	}
	return (count);
}

/**
 * print_s - function that prints a string
 * @s: string to print
 * Return: success is 0, error is -1
 */

int print_s(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}

/**
 * print_c - function that prints a single character
 * @c: character to print
 * Return: success is 0, error is -1
 */

int print_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}
