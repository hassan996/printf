#include "main.h"

/**
 * int_to_string - converts an integer to a string
 * @n: the integer to convert
 *
 * Return: a pointer to the resulting string
 */
char *int_to_string(int n)
{
	char *s;
	int d, i;
	int sign = (n < 0);

	d = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		d++;
	}
	s = malloc(sizeof(char) * (d + sign + 1));
	if (s == NULL)
		return (NULL);
	if (sign)
		s[0] = '-';

	i = d + sign - 1;
	while (i >= sign)
	{
		s[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	s[d + sign] = '\0';
	return (s);
}
