#include "main.h"

/**
 * print_num - print nums as strings
 * @num:arg for func
 * @inc:count and incriment
 *
 * Return: a pointer to the resulting string
 */
int print_num(int num, int *inc)
{
	if (num == -2147483648)
	{
		putchar('-');
		putchar('2');
		*inc = *inc + 2;
		print_num(147483648,inc);
		return (0);
	}
	else if (num < 0)
	{
		putchar('-');
		*inc = *inc + 1;
		num *= (-1);
	}
	if (num >= 10)
	{
		print_num(num / 10, inc);
		putchar((num % 10) + '0');
		*inc += 1;
	}
	else if (num < 10)
	{
		putchar(num + '0');
		*inc = *inc + 1;
	}
	return (0);
}
