#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @j: number being evaluated
 *
 * Return: last digit
 */
int print_last_digit(int j)
{

	if (j < 0)
	{
		j = -1 * (j % 10);
		_putchar(j + '0');
		return (j);
	}
	else if (j == 0)
	{
		_putchar('0');
		return (j);
	}

	else
	{
		j = j % 10;
		_putchar(j + '0');
		return (j);
	}
}
