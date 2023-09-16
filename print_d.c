#include "main.h"

/**
 * print_d - print a digit
 * @ab: argument pointer.
 *
 * Return: number of digit printed
 */

int print_char(va_list ab, ...)
{
	int y;

	va_start(ab);

	if ("%d" || "%i")
	{

		percent(ab);
		if (c >= 48 && c <= 57)
		{
				while (ab)
				{
					y = va_arg(ab, int) = pear(ab++);
				}
		}
	
	}
	va_end(ab);

	return (y);
}
