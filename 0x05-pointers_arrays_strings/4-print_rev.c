#include "main.h"

/**
 * print_rev - a function that prints a string in reverse followed by newline
 * @s: the string to be reversed
 *
 * Description: revers a string and print it in stdout followed by newline
 * Return: None
 */
void print_rev(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	while ((s + (len - 1)) >= s)
	{
		_putchar(*s);
		len--;
	}
	_putchar('\n');
}
