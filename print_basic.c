#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
/*
*#define MAX_LEN 2147483647
*#define MIN_LEN -2147483647
*/

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

	if (n == NULL)
		return (-1);

	/*
    *if (n < MIN_LEN && n > MAX_LEN)
     *   return (-1);
    */

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
		return (-1);
	}
	while (str[count])
	{
		_putchar(str[count]);
		count++;
	}
	count--;
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
