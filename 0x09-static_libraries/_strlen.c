
#include "main.h"

/**
 * _strlen - function returns the length of a string
 * @s: the string to check the length
 *
 * Description: Return the length of a string
 * Return: 0
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
