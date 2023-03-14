#include <stdio.h>

/**
 * main - the a main function of the program
 * @argc: the number of arguments passed to the program
 * @argv: pointer to the string arguments passed to the program
 *
 * Description: print the number of arguments passed to the program
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
