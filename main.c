#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	_printf2("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");
	_printf2("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf2("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf2("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf2("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	return (0);
}
