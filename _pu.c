#include "main.h"

/**
 * _pu - print a string with a new line
 *
 * @st: a string to print
 *
 * Return: 0 on success
 */

int _pu(char *st)
{

	while (*st != '\0')
	{
		pear(*st++);
	}
	pear(10);
	return (0);
}
