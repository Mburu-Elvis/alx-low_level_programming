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
	int i, j;
	int arr[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (c[0] >= 97 && c[0] <= 122)
		c[0] = c[0] - 32;
	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (c[i - 1] == arr[j])
			{
				if (*(c + i) >= 97 && *(c + 1) <= 122)
				{
					*(c + i) = c[i] - 32;
				}
			}
		}
	}
	c[i] = '\0';
	return (c);
}
