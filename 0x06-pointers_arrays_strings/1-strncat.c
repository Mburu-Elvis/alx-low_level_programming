#include "main.h"

/**
 * _strncat -  a function that concatenates two strings
 * @dest: the string being concatenated to
 * @src: the string being concatenated
 * @n: number of bytes to be concatenated
 *
 * Description: A function concatenating string dest and src[n]
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i = 0;

	for (len = 0; dest[len] != '\0'; len++)
	{}
	for (; src[i] < src[n]; i++)
	{
		dest[len] = src[i];
		len++;
	}
	return (dest);
}
