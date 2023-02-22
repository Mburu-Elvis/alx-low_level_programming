#include "main.h"

/**
 * print_alphabet - prints alphabets in lower case
 *
 * Description: None
 * Return: None
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
