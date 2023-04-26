#include "main.h"

/**
 * print_num - prints the given number as a string
 * @num: the number to print
 * @inc: a pointer to an integer value to increment for each character printed
 *
 * Return: 0
 */
int print_num(int num, int *inc)
{
	if (num == -2147483648)
	{
		putchar('-');
		putchar('2');
		*inc = *inc + 2;
		print_num(147483648, inc);
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
	else
	{
		putchar(num + '0');
		*inc = *inc + 1;
	}
	
	return (0);
}
