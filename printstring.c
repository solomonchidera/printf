#include "main.h"

/**
 * _printf - a function that will imitate the work
 * of printf itself
 * @format: an argument accepted by the user as a const char of string
 * Return: int
 */

int _printf(const char *format, ...)
{
	va_list(arg);
	unsigned int i, countr, moon;

	countr = 0;
	va_start(arg, format);

	for (i = 0 ; format[i] != '\0' ; i++)
	{
		if (format[i] != '%')
		{
			putcar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			putcar(va_arg(arg, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			moon = _puts(va_arg(arg, char *));
			i++;
			countr += (moon - 1);
		}
		else if (format[i + 1] == '%')
			putcar('%');
		countr += 1;
	}
	va_end(arg);
	return (countr);
}
