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
	int temp = 15, len = 0;

	for (; s1[len] != '\0'; len++)
	{
		if (s1[len] == s2[len])
		{
			temp = 0;
		}
		else
		{
			if (s2[len] == '\0')
			{
				temp = 15;
				break;
			}
		}
	}
	return (temp);
}
