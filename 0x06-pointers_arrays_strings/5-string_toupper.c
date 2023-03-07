#include "main.h"
#include <stdio.h>

/**
 * string_toupper - a function that changes all lowercase letters to uppercase
 * @c: character being converted
 *
 * Decription: lowercase letters to uppercase
 * Return: char
 */
char *string_toupper(char *c)
{
	int low = 65, i = 0, diff;

	while (c[i] != '\0')
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			diff = c[i] - 97;
			c[i] = diff + low;
		}
		else
		{
			c[i] = c[i];
		}
		i++;
	}
	return (c);
}
