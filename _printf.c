#include "main.h"

/**
 * _printf - prints according to a format
 * @format: pointer to str contain zero
 * Return: number of character printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0;
	int c = 0;

	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					putchar(va_arg(arg, int));
					c++;
					break;
				case 's':
					c += printf("%s", va_arg(arg, char*));
					break;
				case '%':
					putchar('%');
					c++;
					break;

				default:
					putchar('%');
					putchar(format[i]);
					c += 2;
					break;
			}
		}
		else
		{
			putchar(format[i]);
			c++;
		}
		i++;
	}
	va_end(arg);
	return (c);
}
