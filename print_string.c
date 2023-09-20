#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
*print_s - function to print a string
*@s: paramaters
*Return: the number of characters printed
*On error, -1 is returned, and errno is set appropriately.
*/

int print_s(va_list s)
{
	char *value;
	int i;

	value = va_arg(s, char *);
	if (value == NULL)
		value = "(null)";
	for (i = 0; value[i] != '\0'; i++)
	{
		_putchar(value[i]);
	}
	return (i);
}

/**
 * char_hex - print a ascci char in uppercase hexidecimal
 * @ch: char tu print
 *
 * Return: cumber of printed chars
 */

int char_hex(char ch)
{
	int n;
	char h[2];
	char dif = 'A' - ':';

	h[0] = ch / 16;
	h[1] = ch % 16;
	for (n = 0; n < 2; n++)
	{
		if (h[n] >= 10)
			_putchar(h[n] + '0' + dif);
		else
			_putchar(h[n] + '0');
	}
	return (n);
}
/**
 * print_S - print a string with the non printable characters (ASCII)
 * @S: string to print
 *
 * Return: number of printed chars
 */
int print_S(va_list S)
{
	char *str = va_arg(S, char *);
	int i, n = 0;

	if (str == NULL)
		str = "null";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			n += 2;
			n += char_hex(str[i]);
		}
		else
		{
			_putchar(str[i]);
			n++;
		}
	}
	return (n);
}

/**
 * print_r - print a reversed string
 * @r: string to be reversed
 *
 * Return: number of printed chars
 */

int print_r(va_list r)
{
	char *str = va_arg(r, char *);
	int i, n = 0;

	if (str == NULL)
		str = ")llun(";
	for (i = 0; str[i]; i++)
		;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		n++;
	}
	return (n);
}
