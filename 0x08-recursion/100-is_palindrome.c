#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = 0;
	int i, j;

	while (*(s + length))
		length++;
	if (length <= 1)
		return (1);
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		if (*(s + i) != *(s + j))
			return (0);
	}
	return (1);
}

