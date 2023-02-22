#include "main.h"

/**
 * print_alphabet_x10 - printing alphabets(lower) 10 times
 *
 * Description: None
 * Return: None
 */
void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
		i++;
	}
}
