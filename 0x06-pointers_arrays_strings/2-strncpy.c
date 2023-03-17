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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i <  n; i++)
		dest[i] = '\0';
	return (dest);
}
