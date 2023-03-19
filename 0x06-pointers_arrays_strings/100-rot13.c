#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * @c: the string to encode
 *
 * Description: encode string c using rot13
 * Return: encoded string
 */
char *rot13(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if ((c[i] >= 110 && c[i] <= 122) || (c[i] >= 78 && c[i] <= 90))
			c[i] = c[i] - 13;
		else if ((c[i] >= 97 && c[i] <= 109) || (c[i] >= 65 && c[i] <= 77))
			c[i] = c[i] + 13;
	}
	c[i] = '\0';
	return (c);
}
