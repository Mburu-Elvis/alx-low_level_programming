#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: the string being copied to
 * @src: the string being copied
 * @n: number of characters being copied
 *
 * Description: a function that copies n character from src to dest
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len,i = 0;
	for (len = 0; src[len] != '\0'; len++)
	{}

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
