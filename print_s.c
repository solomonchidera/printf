#include "main.h"

/**
 * print_s - print a string.
 * @ab: argument pointer.
 *
 * Return: number of characters printed
 */

int print_s(va_list ab, ...)
{
	char y;

	va_start(ab);

	if ("%s")
	{

		percent(ab);
		if (ab >= 97 && ab <= 122 || ab >= 65 && ab <=  90)
		{
			while (ab)
			{
				y = va_arg(ab, char) = pear(ab++);
			}
		}
	
	}
	va_end(ab);

	return (y);
}
