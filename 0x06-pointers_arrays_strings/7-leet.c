#include "main.h"

/**
 * leet - a function that encodes a string int 1337
 * @c: the string to encode
 *
 * Description:the function encodes string c into 1337
 * Return: a encoded version of sting c
 */
char *leet(char *c)
{
	char lwr[5] = {97, 101, 111, 116, 108};
	char upr[5] = {65, 69, 79, 84, 76};
	char no[5] = {52, 51, 48, 55, 49};
	int i = 0, j;

	for (; c[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (c[i] == lwr[j] || c[i] == upr[j])
			{
				c[i] = no[j];
			}
		}
	}
	c[i] = '\0';
	return (c);
}
