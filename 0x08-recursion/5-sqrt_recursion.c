#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square-root of a number
 * @n: number to evaluate square-root
 *
 * Return: the natural square-root of the number
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	return (helper(n));	
}

/**
 * helper: helper function to square-rot function
 * @n: number to be evaluated
 *
 * Return: square root
 */
int helper(int n)
{
	int i = 1;

	if (i > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	i++;
	return helper(n);
}	
