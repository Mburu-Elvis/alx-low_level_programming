#include "main.h"

/**
 * _strdup - a function that duplicates a string, copies it in a new pointer
 * @str: the string to evaluate
 *
 * Return: pointer to a new string, else NULL
 */
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *str1;

	if (str == NULL)
		return (NULL);
	for (; str[i] != '\0'; i++)
		len++;
	len++;
	i = 0;
	str1 = malloc(sizeof(char) * len);
	if (str1 == NULL)
		return (NULL);
	for (; str[i] != '\0'; i++)
		str1[i] = str[i];
	str1[i] = '\0';
	return (str1);
}
