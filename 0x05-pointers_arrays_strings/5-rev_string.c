#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string
 * @s: the string to be reversed
 *
 * Description: reversing a string
 * Return: None
 */
void rev_string(char *s)
{
	int count = 0, i, j;
	char *str, temp;

	while (s[count] != '\0')
	{
		count++;
	}
	str = s;

	for ( i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
