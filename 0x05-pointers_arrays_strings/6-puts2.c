#include "main.h"

/**
 * puts2 - function printing every character in a string
 * @str: the string being printed
 *
 * Description: print str followed by a new string
 * Return: None
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
