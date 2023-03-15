#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function to duplicate a string
 * @str: the string to create a duplicate for
 *
 * Description: a function that creates and return a duplicate for str
 * Return: duplicate
 */
char *_strdup(char *str)
{
	char *dup;
	int len;

	if (str == NULL)
		return (NULL);
	dup = malloc(sizeof(str) + 1);
	if (dup == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		dup[len] = str[len];
	dup[len] = '\0';
	return (dup);
}
