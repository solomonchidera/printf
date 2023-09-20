#include "main.h"
#include <stdarg.h>

/**
 *print_c - function to print a character
 *@c: paramaters
 *Return: nothing
 *On error, -1 is returned, and errno is set appropriately.
 */

int print_c(va_list c)
{
	char value;

	value = va_arg(c, int);
	_putchar(value);
	return (1);
}
