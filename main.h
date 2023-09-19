#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int printdigit(const char *format, ...);
int _putchar(char c);
void _printf_s(const char *s, int *char_count);
void _printf_c(int c, int *char_count);
int percent_print(const char *format, ...);
int _printf(const char *format, ...);

#endif
