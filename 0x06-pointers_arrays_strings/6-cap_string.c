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

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (c[i - 1] == arr[j])
			{
				if (*(c + i) >= 97 && *(c + 1) <= 122)
				{
					if (c[i - 1] == 9)
						c[i - 1] = 32;
					*(c + i) = c[i] - 32;
				}
			}
		}
	}
	return (c);
}
