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
    unsigned int ui;
    void *addr;

    len = print_string("Let's try to printf a simple sentence.\n");
    print_string("Character:[%c]\n", 'H');
    print_string("String:[%s]\n", "I am a string !");
    len = print_string("Percent:[%%]\n");
    return (0);
}
