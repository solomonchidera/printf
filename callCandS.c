#include "main.h"
/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int char_count;

	va_start(args, format);
	char_count = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				_printf_c(va_arg(args, int), &char_count);
			else if (*format == 's')
				_printf_s(va_arg(args, const char *), &char_count);
			else if (*format == '%')
			{
				_putchar('%');
				char_count++;
			} else
			{
				_putchar('%');
				_putchar(*format);
				char_count += 2;
			}
		} else
		{
			_putchar(*format);
			char_count++;
		}
		format++;
	}
	va_end(args);
	return (char_count);
}
