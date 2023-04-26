#include "main.h"

/**
 * print_string - prints a given string to the standard output
 * @s: a pointer to the string to be printed
 *
 * Return: the number of characters printed
 */
int print_string(char *s)
{
    int count = 0;

    if (s != NULL)
    {
        while (*s)
        {
            putchar(*s++);
            count++;
        }
    }
    return count;
}
