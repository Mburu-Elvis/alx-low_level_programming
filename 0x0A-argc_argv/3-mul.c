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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
