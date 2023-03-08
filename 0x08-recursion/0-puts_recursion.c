#include "main.h"

/**
 * _puts_recursion - a function that prints a string followed by a newline
 * @s: the string to be printed
 *
 * Description: print string s followed by a newline
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
	_puts_recursion((s + 1));

}
