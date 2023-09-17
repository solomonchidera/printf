#include "main.h"

/**
 * print_st - prints a string of chars for you
 *
 * @format: argument format entered by the user
 *
 * Return: integer to number of strings typed
 */

int print_st(const char *format, ...)
{
	int val;
	va_list arg;
	char *str;

	va_start(arg, format);

	while (*format)
	{
		if (*format == '%')
			return (-1);
		{
			while (*format != '\0')
			{
				if (*format == 's')
				{
					val = va_arg(arg, char *);
					putchar(val);
				}
				format++;	
			}
		}
	}
	va_end(arg);
	return (val);
}
