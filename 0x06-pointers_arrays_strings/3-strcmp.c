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
	int i, j, temp = 15;

	for (i = 0; s1[i] != '\0'; i++)
	{}
	for (j = 0; s2[j] != '\0'; j++)
	{}
	if (i == j)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			if (s1[i] == s2[i])
				temp = 0;
			else
				return (-15);
		}
		return (temp);
	}
	else if (i < j)
		return (0 - temp);
	else
		return (temp);
}
