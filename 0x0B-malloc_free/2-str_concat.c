#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Description: a function that concatenates strings s1 and s2 to s3
 * Return: s3
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int len, len1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len = 0; s1[len] != '\0'; len++)
	{}
	for (len1 = 0; s2[len1]; len1++)
	{}
	len1++;
	s3 = malloc(sizeof(char) * (len + len1));
	if (s3 == NULL)
		return (NULL);
	for (len = 0; s1[len] != '\0'; len++)
		s3[len] = s1[len];
	for (len1 = 0; s2[len1]; len1++)
	{
		s3[len] = s2[len1];
		len++;
	}
	return (s3);
}
