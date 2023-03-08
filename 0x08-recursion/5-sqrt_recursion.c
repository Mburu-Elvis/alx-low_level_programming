#include "main.h"

/**
 * powr - returns the natural squareroot of a number
 * @n: input number
 * @c: iterator
 */
int powr(int n, int c)
{
	if (n % c == 0)
	{
		if (c * (n / c) == n)
		{
			return (c);
		}
		else
		{
			return (-1);
		}
	}	
	return (0 + powr(n, c + 1));
}
/**
 * _sqrt_recursion - a function to find the squareroot of a number
 * @n: the number to evaluate the square root
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (powr(n, 2));
}
