#include "main.h"

/**
 * print_char - print a character
 * @ab: argument pointer.
 *
 * Return: number of characters printed
 */

int print_char(va_list ab, ...)
{
	char y;

	va_start(ab);

	if ("%c")
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
