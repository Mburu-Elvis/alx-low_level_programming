#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @src: the second string
 * @dest: the first string bring written to
 *
 * Description: a function that contatenates dest and src strings
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, len;

	for (len = 0; dest[len] != '\0'; len++)
	{}
	for (; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';

	return (dest);
}
