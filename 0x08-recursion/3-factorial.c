#include "main.h"

/**
 * factorial - a function tha calculates the factorial of a number
 * @n: the number to find the factorial for
 *
 * Description: find the factorial of n
 * Return: factorial oof n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
