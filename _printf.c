#include "main.h"
/**
 * _printf - prints according to a format
 * @format: pointer to str contain zero
 * Return: number of character printed
 */
int _printf(const char *format, ...)
{
	int i = 0, c = 0;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
		return (-1);
	for (i = 0; *(format + i) != '\0'; i++)
	{
		if (*(format + i) == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			c += _printf_assist(format, arg, &i);
		}
		else
		{
			putchar(*(format + i));
			c++;
		}
	}
	va_end(arg);
	return (c);
}
