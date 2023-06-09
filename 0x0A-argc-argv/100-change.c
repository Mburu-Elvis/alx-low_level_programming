#include "main.h"

/**
 * main -  the main function of the program
 * @argc: the number of arguments passed to the program
 * @argv: array of string pointers of the string arguments passed
 *
 * Return: 1 if more than 2 arguments, else 0
 */
int main(int argc, char **argv)
{
	int coins = 0, num = 0;

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (atoi(argv[1]) > 0)
		{
			num = atoi(argv[1]);
			coins += num / 25;
			num = num % 25;
			coins += num / 10;
			num = num % 10;
			coins += num / 5;
			num = num % 5;
			coins += num / 2;
			num = num % 2;
			coins += num;
			printf("%d\n", coins);
		}
		else
			printf("0\n");
	}
	return (0);
}
