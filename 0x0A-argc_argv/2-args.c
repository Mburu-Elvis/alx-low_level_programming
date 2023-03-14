#include <stdio.h>

/**
 * main - the main function of the program
 * @argc: the number of arguments passed to the program
 * @argv: a pointer to the strings passed to the program
 *
 * Description: prints all arguments it receives
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
