#include "main.h"

/**
 * _islower(int c) - checks if a character is lower case
 *
 * Description: None
 * Return: 1 if lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97)
	{
		if ( c <= 122)
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
