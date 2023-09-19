#include "main.h"

/**
 * _puts - works like a put function
 *
 * @c: accepts a character
 *
 * Return: number of strings pushed
 */

int _puts(char *c)
{
	int countr = 0;

	if (c)
	{
		for (countr = 0 ; c[countr] != '\0' ; countr++)
		{
			_putchar(c[countr]);
		}
	}
	return (countr);
}
