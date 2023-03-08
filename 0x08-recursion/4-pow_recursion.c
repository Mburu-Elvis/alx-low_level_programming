#include "main.h"

/**
 * _pow_recursion - a function that return the power of a number
 * @x: the base number
 * @y: the number to raise x with
 *
 * Description: find x power y
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
