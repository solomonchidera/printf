#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
<<<<<<< HEAD
int _pu(*st);
<<<<<<< HEAD
int _putchar(char c);
int _printf(const char *format, ...);
int string_print(const char *format, ...);
=======
int print_s(va_list ab, ...);
int print_char(va_list ab, ...);
int percent(va_list ab, ...);
int pear(char c);
int _printf(const char *format, ...);
int point_fun(char *s, va_list ab, *parm);
>>>>>>> 485403dbce687e37f8e7844a42b644283c891782
=======
void _printf_s(const char *s, int *char_count);
void _printf_c(int c, int *char_count);
int _printf(const char *format, ...);
int _puts(char *c);
int _putchar(char c);
>>>>>>> 952512eb82f09a13faa485eb89afed000e227325

#endif
