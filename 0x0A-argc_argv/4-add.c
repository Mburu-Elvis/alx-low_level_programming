#include "main.h"

/**
 * main - the main function of the program
 * @argc: the number of arguments passed
 * @argv: array of string pointer to the arguments passed
 *
 * Return: 1 if the arguments to be added are not numbers, else 0
 */
int main(int argc, char **argv)
{
	int add = 0, i = 1;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (; i < argc; i++)
		{
			if (atoi(argv[i]))
				add += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", add);
	}
	return (0);
}
