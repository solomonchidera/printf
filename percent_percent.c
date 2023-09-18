#include "main.h"

int print_percent(const char *format, ...)
{

if (*format == '%')
	putchar(37 + '0');
	else
	{
		putchar(*format);
	}
	return (0);
}
