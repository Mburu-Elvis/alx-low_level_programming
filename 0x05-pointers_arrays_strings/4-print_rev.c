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

	len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	len--;
	while ((s + len) >= s)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
