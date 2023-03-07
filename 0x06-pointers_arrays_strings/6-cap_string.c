#include "main.h"

/**
 * cap_string -a function that capitalizes a string
 * @c: string being capitalized
 *
 * Description: a function that capitalizes a string
 * Return: char
 */
char *cap_string(char *c)
{
	int low = 65, i = 0, diff;

	while (c[i] != '\0')
	{
		if (i == 0 || c[i - 1] == 32 || c[i - 1] == 9 || c[i - 1] == 10)
		{
			if (c[i] >= 97 && c[i] <= 122)
			{
				diff = c[i] - 97;
				c[i] = low + diff;
			}
			else
			{
				c[i] = c[i];
			}
		}
		else
		{
			c[i] = c[i];
		}
		i++;
	}
	return (c);
}
