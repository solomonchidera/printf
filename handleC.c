#include "main.h"

/**
 * _printf_c - Helper function for %c specifier
 * @c: Character argument
 * @char_count: Pointer to the character count
 */
void _printf_c(int c, int *char_count)
{
    putchar(c);
    (*char_count)++;
}
