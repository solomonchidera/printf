#include "main.h"

/**
 * print_string - a function that will imitate the work
 * of printf itself
 * @format: an argument accepted by the user as a const char of string
 * Return: int
 */

int print_string(const char *format, ...)
{
	unsigned int i, countr, moon;

	countr = 0;
	va_list(arg);
	va_start(arg, format);

	for (i = 0 ; format[i] != '\0' ; i++)
	{
		if (format[i] != '%')
		{
			putcar(format[i]);
		}
		else if (format[i++] == 'c')
		{
			putcar(va_arg(arg, int));
			i++;
		}
		else if (format[i++] == 's')
		{
			moon = putcar(va_arg(arg, int));
			i++;
			countr += (moon - 1);
		}
		else if (format[i++] == '%')
			putcar('%');
		countr += 1;
	}
	va_end(arg);
	return (countr);
}
