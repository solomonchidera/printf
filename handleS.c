#include "main.h"
/**
 * _printf_s - Helper function for %s specifier
 * @s: String argument
 * @char_count: Pointer to the character count
 */
void _printf_s(const char *s, int *char_count)
{
    while (*s)
    {
        putchar(*s);
        (*char_count)++;
        s++;
    }
}
