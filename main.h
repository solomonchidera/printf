#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
void _printf_s(const char *s, int *char_count);
void _printf_c(int c, int *char_count);
int _printf(const char *format, ...);
int _printf2(const char *format, ...);
int _puts(char *c);
int putcar(char c);

#endif
