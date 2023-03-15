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
	int len, len1;

	if (str == NULL)
		return (NULL);
	for (len1 = 0; str[len1]; len1++)
	{}
	dup = malloc(sizeof(char) * len1 + 1);
	if (dup == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		dup[len] = str[len];
	dup[len] = '\0';
	return (dup);
}
