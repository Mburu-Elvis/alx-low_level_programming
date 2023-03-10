#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: first string to evaluate
 * @s2: second string in the evaluation
 *
 * Description: compare s1 and s2
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int temp = 15, len = 0, len_t = 0;

	for (; s1[len] != '\0'; len++)
	{}
	len--;
	for (; s2[len_t] != '\0'; len_t++)
	{}
	len_t--;
	while (s1[len] == s2[len_t] && s1[len] != '\0')
	{
		temp = 0;
		len++;
		len_t++;
	}
	if (len > len_t)
	{
		temp = 15;
	}
	else if (len < len_t)
	{
		temp = 0 - 15;
	}
	return (temp);
}
