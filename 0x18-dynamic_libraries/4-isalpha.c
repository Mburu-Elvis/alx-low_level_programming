#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: character being evaluated
 *
 * Description: Evaluates if c is a character regardless its case
 * Return: 1 if character 0 otherwise
 */
int _isalpha(int c)
{

	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
