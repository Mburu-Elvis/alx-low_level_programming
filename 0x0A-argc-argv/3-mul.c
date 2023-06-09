#include "main.h"

/**
 * main - the main functionof the program
 * @argc: the number of arguments passed
 * @argv: an array of string pointers to the arguments passed
 *
 * Return: 1 if error else 0
 */
int main(int argc, char **argv)
{
	int mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
