#include <stdio.h>
#include "main.h"

/**
 * factorial - a function that returns the factorial of a number
 * @n: the number to evaluate it's factorial
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
