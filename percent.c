#include "main.h"

/**
 * percent - print a char %
 * @ab: argument pointer.
 *
 * Return: number of chars printed
 */

int percent(va_list ab, ...)
{
	(void)ab;
	return (pear('%', ab));
}
