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
	int i = 0;

	while (*(str + i) != '\0')
	{
		if ((i % 2) == 0)
		{
			_putchar(*(str + i));
			i++;
		}
		i++;
	}
	_putchar('\n');
}
