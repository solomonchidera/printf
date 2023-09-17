#include "main.h"

/** string_print - a print function for char only
 * @format: format given
 * Return: integer of how many allocated char
 */

int string_print(const char *format, ...)
{
	int b;
	va_list ab;
	int val;
	val = 0;

	va_start(ab, format);
	while (*format != '\0')
	{
		b = 0;

		if (*format == '%')
		{
			++format;
			switch(*format)
			{
				case 'c' :
					b = va_arg(ab, int);
					_putchar(b);
					break;
				default :
					b = -1;
					break;
			}
		}
		else
		{
			b = *format;
			_putchar(b);
		}

		if (b < 0)
		{
			val = b;
			break;
		}
		else
			val += b;
		++format;
	}
	va_end(ab);
	return (val);
}
