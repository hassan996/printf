#include "main.h"


/**
 * print_binary - prints a string to stdout
 * @s: the string to print
 *
 * Return: the number of characters printed
 */
int print_binary(va_list arg)
{
	unsigned int i, number, n, t, res;
	int cou = 0;

	binary = va_arg(b, unsigned int);

	if (binary != 0)
	{
		number = n;
		i = 0;

		while (number != 0)
		{
			number = number / 2;
			i++;
		}
		t = 1;
		for (j = 1; j <= i - 1; j++)
			t *= 2;
		for (j = 1; j <= i; j++)
		{
			d = n / t;
			putchar(res + '0');
			cou++;
			n -= res * t;
			t /= 2;
		}
		else
		{
			putchar('0');
			return (1);
		}
		return (cou);
}
