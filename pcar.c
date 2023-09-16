#include "main.h"

/**
 * pcar - character to std.out
 *
 * @c: the character to be printed
 *
 * Return: 1 on success, -1 on error.
 */

int pcar(char c)
{

	return (write(stdout, &c, 1));
}
