#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes of s2 to concatenate
 *
 * Return: pointer to the newly allocated space in memory, else NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, len = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s1[len] != '\0'; len++)
	{}
	str = malloc(sizeof(char) * (len + n + 1));
	if (str == NULL)
		return (NULL);
	for (; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (; j < n; j++)
	{
		if (s2[j] == '\0')
			break;
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
