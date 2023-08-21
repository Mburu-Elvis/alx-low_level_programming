#include "main.h"
#include <stdlib.h>

/**
 * _abs - comupte absolute value of an integer
 * @j: The value being computed
 *
 * Description: computes the absolute value of an integer
 * Return: +int
 */
int _abs(int j)
{
	if (j < 0)
	{
		return (0 - j);
	}
	else
	{
		return (j);
	}
}
