#include <stdio.h>

/**
 * main - main function of the program
 * @argc: the number of arguments passed to the program
 * @argv: pointer to the strings passed to the program
 *
 * Description: prints the name of the program
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
