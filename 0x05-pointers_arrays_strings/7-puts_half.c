#include "main.h"

/**
 * puts_half - function printing the second half of a string
 * @str: string to be evaluated
 *
 * Description: print the second half of the string
 * Return: None
 */
void puts_half(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	count++;
	for (count /= 2; str[count] != '\0'; count++)
	{
		_putchar(str[count]);

	}
	_putchar('\n');
}
