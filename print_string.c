#include "main.h"


/**
 * print_string - prints a string to stdout
 * @s: the string to print
 *
 * Return: the number of characters printed
 */
int print_string(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		putchar(s[l]);
		l++;
	}
	return (l);
}
