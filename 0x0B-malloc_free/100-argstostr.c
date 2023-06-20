#include "main.h"

/**
 * argstostr - function that concatenates all the arguments to your program
 * @ac: the number of arguments
 * @av: pointer to list of arguments passed to the commandline
 *
 * Return: NULL if c == 0, else poiter to the concatenated strings
 */
char *argstostr(int ac, char **av)
{
	int i = 0, k = 0;
	char **ptr;

	if (ac == 0)
		return (NULL);
	ptr = malloc(sizeof(av));
	if (ptr == NULL)
		return (NULL);
	for (; i < ac; i++)
	{
		ptr[i] = malloc(sizeof(av[i]));
		if (ptr[i] == NULL)
		{
			free(ptr[i]);
			free(ptr);
			return (NULL);
		}
		for (; av[i][k] != '\0'; k++)
			ptr[i][k] = av[i][k];
		ptr[i][k] = '\0';
	}
	return (*ptr);
}
