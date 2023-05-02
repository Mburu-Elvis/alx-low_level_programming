#include "main.h"

/**
* wildcmp - function that compares 2 strings
* @s1: string 1
* @s2: string 2
*
* Return: 1 if s1 and s2 are equal , 0 if otherwise
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '\0')
			return (1);
		if (*s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (0);
	}
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
