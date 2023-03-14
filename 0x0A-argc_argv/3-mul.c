#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main program
 * @argc: the number of arguments passed to the program
 * @argv: a pointer the the string arguments passed to the program
 *
 * Description: multiply two numbes
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1, mul = 1;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		while (i < argc)
		{
			mul *= atoi(argv[i]);
			i++;
		}
		printf("%d\n", mul);
	}
	return (0);
}
