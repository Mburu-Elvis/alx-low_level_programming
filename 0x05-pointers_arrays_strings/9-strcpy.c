#include "main.h"

/**
 * _strcpy - a function copying a string ptr from src to dest
 * @src: the source pointer
 * @dest: the destination pointer
 *
 * Description: copy pointer src to dest
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int len;

	for (len = 0; src[len] != '\0'; len++)
	{}
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
