#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: number being evaluated
 *
 * Description: evaluates the sign of a number
 * Return: 0 if n is zero, -1 and prints - if < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
