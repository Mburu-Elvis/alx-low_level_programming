#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: pointer to the string to be printed
 *
 * Return: None
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s = (s + 1);
	_puts_recursion(s);
}
