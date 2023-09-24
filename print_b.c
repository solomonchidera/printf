#include "main.h"
#include <stdarg.h>

/**
 *base_change_2 - function to change a int number in other base
 *@n: the number
 *@newdigit: the number of digits that will be has the new number
 *@base: the new base
 *
 *Return: the number of characters printed
 *On error, -1 is returned, and errno is set appropriately.
 */

int base_change_2(unsigned int n, int newdigit, unsigned int base)
{
	int a;

	if (n / base == 0)
	{
		_putchar(n % base + '0');
		return (newdigit + 1);
	}
	else
	{
		a = base_change_2(n / base, newdigit + 1, base);
		_putchar(n % base + '0');
		return (a);
	}
}


/**
 *print_b - function to print a binary number
 *@b: paramaters
 *Return: the number of digits printed
 *On error, -1 is returned, and errno is set appropriately.
 */

int print_b(va_list b)
{
	int count, binary;
	unsigned int n;

	n = va_arg(b, unsigned int);
	count = 0;
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (n > 0)
	{
		binary = base_change_2(n, count, 2);
	}
	return (binary);
}
