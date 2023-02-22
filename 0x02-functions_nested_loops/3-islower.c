#include "main.h"

/**
 * _islower - checking the case of a character
 * @c: the character being evaluated
 *
 * Description: checking if a character is lower/higher
 * Return: 1 if lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97)
	{
		if (c <= 122)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (0);
	}
}
