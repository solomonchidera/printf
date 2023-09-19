#include "main.h"
/**
 * _printf - print the shitty number
 * @format: the specifier constant character
 *
 * Return: number of digit printed
 */

int _printf(const char *format, ...)
{
	char *p;
	int char_count, num;

					char str[12];
	va_list args;
	va_start(args, format);
	char_count = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format)
			{
				if (*format == 'd' || *format == 'i')
				{
					num = va_arg(args, int);
					snprintf(str, sizeof(str), "%d", num); /* Convert integer to string */
					p = str;
					if (num < 0)
					{
						_putchar(45 + num);
						return (num);
					}
					while (*p != '\0')
					{
						_putchar(*p++);
						char_count++;
					}
					break;
				}
				else
				{
					_putchar('%');
					_putchar(*format);
					char_count += 2;
					break;
				}
			}
		}
		else
		{
			_putchar(*format);
			char_count++;
		}
		format++;
	}
	va_end(args);
	return (char_count);
}
