#include "main.h"

/**
 * main - main program
 * @argc: the number of arguments passed to the program
 * @argv: array of string pointers to the arguments passed to the program
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
