#include "main.h"

/**
 * _puts - function prints a string followed by a new line
 * @str: string pointer to the string to be output
 *
 * Description: printing the string being pointed to by the pointer parameter
 * Return: None
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
