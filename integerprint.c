#include "main.h"

/**
 * printdigit - a function that will print an unsigned integer
 * handling both i and d specefiers together
 *
 * @format: an input argument entered by the user as a const
 *
 * Return: int
 */

int printdigit(const char *format, ...)
{
	va_list list;

	int counter, num;

	counter = 0;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(list, format);
	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			counter++;
		}
		else
		{
			format++;
		}
		if (*format == 'd' || *format == 'i')
		{
			num = va_arg(list, int);
			_putchar(num + '0');
		}
		format++;
	}
	va_end(list);
	return (num);
}
