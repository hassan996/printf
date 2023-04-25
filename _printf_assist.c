#include "main.h"

/**
 * _printf_assist - Create output based on the selected format
 * @format:contains  zero
 * @arg:contains zero or more dire
 * @i: contain zero or more dire
 * Return:number
 */
int _printf_assist(const char *format, va_list arg, int *i)
{
	int r = 0, len_, j, t_int;
	char *t_ch, *null = "(null)";

	switch (*(format + *i + 1))
	{
	case 's':
		t_ch = va_arg(arg, char *);
		if (t_ch == NULL)
		{
			for (len_ = 0; *(null + len_) != '\0'; len_++)
			{
				putchar(*(null + len_));
				r++;
			}
		}
		else
		{
			for (j = 0; t_ch[j] != '\0'; j++)
			{
				putchar(t_ch[j]);
				r++;
			}
		}
		break;
	case 'c':
		putchar(va_arg(arg, int));
		r++;
		break;
	case 'd':
	case 'i':
		t_int = va_arg(arg, int);
		t_ch = int_to_string(t_int);
		r = print_string(t_ch);
		free(t_ch);
		break;
	case '%':
		putchar(format[*i]);
		r++;
		break;
	default:
		putchar(format[*i]);
		r++;
		*i -= 1;
		break;
	}
	*i += 1;
	return (r);
}
