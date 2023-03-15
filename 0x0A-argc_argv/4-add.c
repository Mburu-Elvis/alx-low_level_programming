#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - the main function of the program
 * @argc: the number of arguments passed to the program
 * @argv: a pointer to the string arguments passed to the program
 *
 * Description: the program adds positive numbers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int add = 0, i = 1, j;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		while (i < argc)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[i]);
			i++;
		}
		printf("%d\n", add);
	}
	return (0);
}
