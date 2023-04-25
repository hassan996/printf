#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int _printf(const char *format, ...);
int _printf_assist(const char *format, va_list arg, int *i);
char *int_to_string(int n);
int print_string(char *s);
#endif
