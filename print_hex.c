#include "main.h"

/**
 * print_h - a function to handle the hexadecimal parameter
 *
 * @h: parameter to be tested
 *
 * Return: number
 */

int print_h(va_list h)
{
	int decnum, temp, a;
	char Hex[32];

	temp = 0;

	while (decnum > 0)
	{
		switch (decnum % 16)
		{
			case 10 :
				Hex [temp] = 'A';
				break;
			case 11 :
				Hex [temp] = 'B';
			case 12 :
				Hex [temp] = 'C';
			case 13 :
				Hex [temp] = 'D';
			case 14 :
				Hex [temp] = 'E';
			case 15 :
				Hex [temp] = 'F';
			default :
				Hex [temp] = (decnum % 16) + 0x30;
		}
		decnum = decnum / 16;
		temp ++;
	}
	for (a = (temp - 1) ; a >= 0 ; a--)
	{
		_putchar(Hex[a] + '0');
	}
	return (0);
}
