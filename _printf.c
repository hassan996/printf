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
	while (*format != '\0')
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
					char *s = va_arg(arg, char *);

					for (; *s != '\0'; s++)
					{
						putchar(*s);
						c++;
					}
					break;
				case '%':
					putchar('%');
					c++;
					break;
				case 'd':
				case 'i':
					{
					int number = va_arg(arg, int);

					printf("%d", number);
					c++;
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
