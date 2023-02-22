#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @j: number being evaluated
 *
 * Return: last digit
 */
int print_last_digit(int j)
{
	int x;

	if (j < 0)
	{
		j = -1 * j;
	}
	x = j % 10;
	_putchar(x);
	return (x);
}
