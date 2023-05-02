#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments passed to a program
 * @ac: the number of arguments passed
 * @av: the array of arguments passed
 *
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			k++;
		k++;
	}
	s = malloc((k + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			s[k++] = av[i][j];
		s[k++] = '\n';
	}
	s[k] = '\0';
	return (s);
}
