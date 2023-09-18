#include "main.h"

/**
 * pear -  print a character to stdout
 * @c: character to print
 * 
 * Return: 1 on success -1 on error.
 */

int pear(char c)
{
	return (write(stdout, &c, 1));
}
