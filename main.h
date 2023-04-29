#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int _printf(const char *format, ...);
int _printf_assist(const char *format, va_list arg, int *i);
int print_num(int num, int *inc);
#endif
