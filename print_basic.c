#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_i - function that prints an integer
 * @i: integer to print
 * Return: length, or -1 if error
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
 * Return: length, or -1 if error
 */

int print_s(va_list s)
{
	int count = 0;
	char *str = va_arg(s, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[count])
	{
		_putchar(str[count]);
		count++;
	}

	return (count);
}

/**
 * print_c - function that prints a single character
 * @c: character to print
 * Return: length
 */

int print_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}

/**
 * print_mod - function that prints a single %
 * @mod: character to print
 * Return: length
 */

int print_mod(va_list mod)
{
	(void)mod;
	_putchar('%');
	return (1);
}

/**
 * print_u - function that prints an integer
 * @u: integer to print
 * Return: length, or -1 if error
 */

int print_u(va_list u)
{
	unsigned int a[10];
	unsigned int i, m, n, sum;
	int count;

	n = va_arg(u, unsigned int);
	m = 1000000000; /* (10 ^ 9) */
	a[0] = n / m;
	for (i = 1; i < 10; i++)
	{
		m /= 10;
		a[i] = (n / m) % 10;
	}
	for (i = 0, sum = 0, count = 0; i < 10; i++)
	{
		sum += a[i];
		if (sum || i == 9)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}
