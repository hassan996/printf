#include "main.h"

/**
 * _printf_assist - function that generates output based on the given format
 * @format: a string that contains zero or more directives
 * @arg: a list of zero or more arguments
 * @i: a pointer to the current position in the format string
 *
 * Return: the number of characters printed
 */
int _printf_assist(const char *format, va_list arg, int *i)
{
	int num_chars_printed = 0;
	char *str_arg;
	const char *null_str = "(null)";

	switch (format[(*i) + 1]) {
		case 's':
			str_arg = va_arg(arg, char *);
			if (str_arg == NULL) {
				for (int j = 0; null_str[j] != '\0'; j++) {
					putchar(null_str[j]);
					num_chars_printed++;
				}
			} else {
				for (int j = 0; str_arg[j] != '\0'; j++) {
					putchar(str_arg[j]);
					num_chars_printed++;
				}
			}
			break;

		case 'c':
			putchar(va_arg(arg, int));
			num_chars_printed++;
			break;

		case '%':
			putchar('%');
			num_chars_printed++;
			break;

		default:
			putchar(format[*i]);
			num_chars_printed++;
			(*i)--;
			break;
	}

	(*i)++;
	return num_chars_printed;
}

