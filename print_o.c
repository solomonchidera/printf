#include "main.h"

#define CH_SIZE	8
#define ARR_SIZE sizeof(int)* CH_SIZE

/**
 * printOctal - a function to handle the octal specifier
 *
 * @o: tested parameter
 *
 * Return: 0 upon success
 */

int printOctal(va_list o)
{
	unsigned int octalnumbs[1000000000000];
	long int decnum;
	int m, n;
	m = 0;

	n = 0;

	decnum = va_arg(o, unsigned int);

	if (decnum == 0)
	{
		_putchar('0');
		return (1);
	}

	while (decnum > 0)
	{
		octalnumbs[m] = decnum % 8;
		decnum = decnum / 8;
		m++;
	}
	for (n = m - 1; n >= 0 ; n++)
		_putchar(octalnumbs[n] + 48);
	return (0);
}
