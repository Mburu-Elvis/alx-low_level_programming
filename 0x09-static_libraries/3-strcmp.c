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
	int i = 0, diff = 0;

	while (diff == 0)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		diff = s1[i] - s2[i];
		i++;
	}
	return (diff);
}
