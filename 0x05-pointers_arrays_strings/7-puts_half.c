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
	int half;

	while (str[count] != '\0')
	{
		count++;
	}
	count--;
	if ((count % 2) == 0)
	{
		half = (count / 2);
	}
	else
	{
		half = ((count - 1) / 2) + 1;
	}
	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
