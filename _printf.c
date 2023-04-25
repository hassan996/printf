#include "main.h"

/**
 * _printf - prints formatted output to stdout
 * @format: format string
 * 
 * Return: number of characters printed, or -1 if an error occurred
 */
int _printf(const char *format, ...)
{
    if (format == NULL) return -1;
    
    va_list args;
    va_start(args, format);

    int count = 0;
    for (const char *p = format; *p != '\0'; p++)
    {
        if (*p != '%')
        {
            putchar(*p);
            count++;
        }
        else if (*(p + 1) != '\0')
        {
            int res = handle_format_specifier(&p, args);
            if (res < 0) return -1;
            count += res;
        }
        else return -1;
    }

    va_end(args);
    return count;
}
